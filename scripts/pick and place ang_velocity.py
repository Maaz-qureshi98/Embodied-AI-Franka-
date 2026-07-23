r"""
pick_place_velocity_sweep.py

Purpose
-------
Find the angular-velocity threshold at which ARKit pose tracking (mounted on
panda_link8) starts to diverge from the true Franka pose, using a realistic
human-style PICK-AND-PLACE motion: translate from position A to position B
(~30 cm apart) while also rotating the end effector -- exactly the combined
translation+rotation motion a human hand makes moving an object from one
spot to another and reorienting it on the way.

Motion shape
------------
    A (pick)  ----------------->  B (place)
    orientation_A                 orientation_B = orientation_A * rotation

Both position and orientation are interpolated together along the same
trapezoidal *angular*-velocity schedule (translation rides along the same
timeline, so hand and wrist arrive together, like a real reach-and-twist
placement). Angular velocity profile:

    velocity
        ^
        |      ______________
        |     /              \
        |    /                \
        |   /                  \
        +--/--------------------\------> time
           ramp-up   CRUISE   ramp-down
                    (constant angular velocity --
                     this is the number you attach
                     to the trial)

Ramp time is fixed across all trials; only the cruise (peak) angular velocity
changes between levels. Rotation angle and translation distance are held
fixed (ROTATION_ANGLE_DEG, TRANSLATION_DISTANCE_M) so every trial is the same
physical motion, just faster or slower.

At each velocity level the robot does A->B (recorded) and then B->A
(recorded, same velocity, for a repeat data point) before moving to the next,
faster level. Your existing Franka+ARKit pose logger should already be
running; this script prints "=== RUN START/END ===" markers with the target
velocity so you can slice the logged data by trial afterwards.

Velocity levels (deg/s) -- 15 levels, finer-grained in the low-to-mid range
(where an inflection point is often found) and coarser at the top:

    Level  1:   5 deg/s      Level  9:  33 deg/s
    Level  2:  10 deg/s      Level 10:  35 deg/s
    Level  3:  15 deg/s      Level 11:  40 deg/s
    Level  4:  18 deg/s      Level 12:  45 deg/s
    Level  5:  20 deg/s      Level 13:  50 deg/s
    Level  6:  23 deg/s      Level 14:  55 deg/s
    Level  7:  28 deg/s      Level 15:  65 deg/s
    Level  8:  30 deg/s

If error is still flat by the last level, add a level above 65. If error
already jumps between two adjacent levels, insert finer steps between them
(bisection) to pin down the actual safe-spot cutoff -- that boundary is the
empirical result this experiment is for; the levels above are a starting
bracket, not the answer.
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from moveit_msgs.srv import GetPositionIK
from moveit_msgs.msg import PositionIKRequest, RobotState
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
import tf2_ros
import time
import numpy as np

JOINTS = ['panda_joint1', 'panda_joint2', 'panda_joint3', 'panda_joint4',
          'panda_joint5', 'panda_joint6', 'panda_joint7']

# ----------------------------------------------------------------------------
# EXPERIMENT PARAMETERS -- edit these
# ----------------------------------------------------------------------------
TAP_HOLD = 5.0             # seconds held at A before starting, for logger sync
HOLD_AT_ENDPOINT = 2.0     # seconds held at A/B between trials

TRANSLATION_DISTANCE_M = 0.30      # A to B distance, meters (~30 cm as requested)
TRANSLATION_DIRECTION = [-1.0, 0.0, 0.0]   # tried first; if unreachable or its path hits a
                                             # singularity, the script auto-diagnoses and adopts
                                             # a working alternate direction automatically.

ROTATION_AXIS = [0, 0, 1]      # rotate about Z (yaw) -- typical "place it rotated" reorientation.
                                 # Change to [1,0,0] (roll) or [0,1,0] (pitch) if that's the DOF
                                 # you actually care about for your ARKit mount.
ROTATION_ANGLE_DEG = 90.0       # fixed A->B reorientation angle for every trial

# 15 increasing levels, as requested.
VELOCITY_LEVELS_DEG_S = [5, 10, 15, 18, 20, 23, 28, 30, 33, 35, 40, 45, 50, 55, 65]

RAMP_TIME_S = 0.25          # fixed accel/decel time for every trial (seconds)
DT = 0.05                   # waypoint sampling interval (seconds)
MAX_JOINT_JUMP = 0.15       # same safety threshold as your other scripts


# ----------------------------------------------------------------------------
# Math helpers (same conventions as your other scripts)
# ----------------------------------------------------------------------------
def quat_mult(q1, q2):
    x1, y1, z1, w1 = q1
    x2, y2, z2, w2 = q2
    return [
        w1 * x2 + x1 * w2 + y1 * z2 - z1 * y2,
        w1 * y2 - x1 * z2 + y1 * w2 + z1 * x2,
        w1 * z2 + x1 * y2 - y1 * x2 + z1 * w2,
        w1 * w2 - x1 * x2 - y1 * y2 - z1 * z2
    ]


def axis_angle_quat(axis, angle_rad):
    axis = np.array(axis) / np.linalg.norm(axis)
    s = np.sin(angle_rad / 2)
    return [axis[0] * s, axis[1] * s, axis[2] * s, np.cos(angle_rad / 2)]


def slerp(q0, q1, t):
    q0 = np.array(q0)
    q1 = np.array(q1)
    dot = np.dot(q0, q1)
    if dot < 0:
        q1 = -q1
        dot = -dot
    if dot > 0.9995:
        result = q0 + t * (q1 - q0)
        return (result / np.linalg.norm(result)).tolist()
    theta0 = np.arccos(dot)
    theta = theta0 * t
    q2 = q1 - q0 * dot
    q2 = q2 / np.linalg.norm(q2)
    return (q0 * np.cos(theta) + q2 * np.sin(theta)).tolist()


def quat_angle_deg(q0, q1):
    """Angle in degrees between two quaternions (shortest path)."""
    q0 = np.array(q0)
    q1 = np.array(q1)
    dot = abs(np.dot(q0, q1))
    dot = min(1.0, max(-1.0, dot))
    return np.degrees(2 * np.arccos(dot))


def trapezoid_schedule(total_angle_deg, peak_vel_deg_s, ramp_time_s, dt):
    """
    Build a time-sampled progress schedule s(t) in [0,1] for a trapezoidal
    (or triangular, if peak velocity can't be sustained) angular-velocity
    profile covering total_angle_deg at peak_vel_deg_s.

    Physics note: under constant acceleration from rest, the angle covered
    during the ramp is 0.5*peak_vel*ramp_time (average velocity is half the
    peak, not the peak) -- NOT peak_vel*ramp_time. Using the wrong value here
    made the cruise segment start from the wrong angle, producing a sudden
    angle jump (jerk) right at the ramp/cruise boundary and a measured peak
    rate 3.5x higher than requested.

    Returns: (time_array, s_array, total_time, is_triangular)
    """
    accel = peak_vel_deg_s / ramp_time_s  # deg/s^2, constant during each ramp
    ramp_covered_angle = 0.5 * accel * ramp_time_s ** 2  # = 0.5*peak_vel*ramp_time

    if 2 * ramp_covered_angle >= total_angle_deg:
        # Fixed ramp time can't leave room for a cruise segment -- fall back
        # to a triangular profile (no cruise, peak velocity reached exactly
        # at the midpoint). Exact ramp time for a symmetric triangular
        # profile: total_angle = peak_vel * ramp_time  =>  ramp_time =
        # total_angle / peak_vel (no sqrt -- that was also wrong before).
        ramp_time_s = total_angle_deg / peak_vel_deg_s
        accel = peak_vel_deg_s / ramp_time_s
        ramp_covered_angle = total_angle_deg / 2.0
        cruise_angle = 0.0
        cruise_time = 0.0
        is_triangular = True
    else:
        cruise_angle = total_angle_deg - 2 * ramp_covered_angle
        cruise_time = cruise_angle / peak_vel_deg_s
        is_triangular = False

    total_time = 2 * ramp_time_s + cruise_time

    n_steps = max(2, int(np.ceil(total_time / dt)) + 1)
    t_arr = np.linspace(0, total_time, n_steps)
    angle_arr = np.zeros_like(t_arr)

    for i, t in enumerate(t_arr):
        if t < ramp_time_s:
            angle_arr[i] = 0.5 * accel * t ** 2
        elif t < ramp_time_s + cruise_time:
            angle_arr[i] = ramp_covered_angle + peak_vel_deg_s * (t - ramp_time_s)
        else:
            t2 = total_time - t
            angle_arr[i] = total_angle_deg - 0.5 * accel * t2 ** 2

    s_arr = np.clip(angle_arr / total_angle_deg, 0.0, 1.0)
    return t_arr, s_arr, total_time, is_triangular


# ----------------------------------------------------------------------------
# Node
# ----------------------------------------------------------------------------
class PickPlaceMover(Node):
    def __init__(self):
        super().__init__('pick_place_velocity_sweep')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.ik_client = self.create_client(GetPositionIK, '/compute_ik')
        self.traj_client = ActionClient(self, FollowJointTrajectory,
                                         '/panda_arm_controller/follow_joint_trajectory')
        self.current_joint_state = None
        self.create_subscription(JointState, '/joint_states', self.joint_cb, 10)

    def joint_cb(self, msg):
        self.current_joint_state = msg

    def wait_tf(self):
        while rclpy.ok():
            try:
                return self.tf_buffer.lookup_transform('panda_link0', 'panda_link8', rclpy.time.Time())
            except Exception:
                rclpy.spin_once(self, timeout_sec=0.2)

    def wait_joint_state(self):
        while self.current_joint_state is None and rclpy.ok():
            rclpy.spin_once(self, timeout_sec=0.2)
        return self.current_joint_state

    def compute_ik(self, target_pose_stamped, seed_js):
        self.ik_client.wait_for_service()
        req = GetPositionIK.Request()
        req.ik_request = PositionIKRequest()
        req.ik_request.group_name = "panda_arm"
        req.ik_request.pose_stamped = target_pose_stamped
        req.ik_request.timeout.sec = 2
        req.ik_request.avoid_collisions = True
        seed = RobotState()
        seed.joint_state = seed_js
        req.ik_request.robot_state = seed
        future = self.ik_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        result = future.result()
        if result.error_code.val != 1:
            raise RuntimeError(f"IK failed, error code: {result.error_code.val}")
        name_to_pos = dict(zip(result.solution.joint_state.name,
                                result.solution.joint_state.position))
        return [name_to_pos[j] for j in JOINTS]

    def execute_trajectory(self, waypoints, total_time):
        """
        Sends positions AND velocities at every waypoint. Position-only
        trajectories force many controllers to assume zero velocity at
        EVERY waypoint (not just the start/end) when building their spline
        interpolation -- with a finely-sampled trajectory (100+ points) that
        means the arm can end up decelerating to a near-stop and
        re-accelerating at every single point, which is a very common real
        cause of a stuttery/jerky feel that no amount of smoothing the
        position schedule alone can fix. Velocities are estimated via
        central difference between neighboring waypoints, with zero velocity
        enforced at the very first and last point (matching our trapezoidal
        profile, which is designed to start/end at rest anyway).
        """
        self.traj_client.wait_for_server()
        goal = FollowJointTrajectory.Goal()
        goal.trajectory.joint_names = JOINTS
        n = len(waypoints)
        n_joints = len(JOINTS)

        times = [total_time * (i / (n - 1)) if n > 1 else 0.0 for i in range(n)]

        velocities = [[0.0] * n_joints for _ in range(n)]
        for i in range(1, n - 1):
            dt_c = times[i + 1] - times[i - 1]
            if dt_c > 1e-6:
                velocities[i] = [
                    (waypoints[i + 1][j] - waypoints[i - 1][j]) / dt_c
                    for j in range(n_joints)
                ]
        # velocities[0] and velocities[-1] stay zero -- start/end at rest.

        points = []
        for i, positions in enumerate(waypoints):
            pt = JointTrajectoryPoint()
            pt.positions = positions
            pt.velocities = velocities[i]
            t = times[i]
            pt.time_from_start.sec = int(t)
            pt.time_from_start.nanosec = int((t % 1) * 1e9)
            points.append(pt)
        goal.trajectory.points = points
        future = self.traj_client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future)
        handle = future.result()
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)

    def move_to_joint(self, positions, duration_sec=3):
        """Plain point-to-point move, used only for the one-time initial
        move from wherever the arm starts to pick position A."""
        self.execute_trajectory([positions], duration_sec)


def safety_check(waypoints):
    max_jump = 0.0
    for i in range(1, len(waypoints)):
        jump = max(abs(a - b) for a, b in zip(waypoints[i], waypoints[i - 1]))
        max_jump = max(max_jump, jump)
    return max_jump


def make_pose(pos, quat):
    target = PoseStamped()
    target.header.frame_id = "panda_link0"
    target.pose.position.x = pos[0]
    target.pose.position.y = pos[1]
    target.pose.position.z = pos[2]
    target.pose.orientation.x = quat[0]
    target.pose.orientation.y = quat[1]
    target.pose.orientation.z = quat[2]
    target.pose.orientation.w = quat[3]
    return target


def compute_ik_robust(node, target, seeds, waypoint_desc=""):
    """
    Try IK with each seed in `seeds` in order (deduplicated), falling back
    if the current seed leads the solver into an unreachable/singular
    configuration. Raises a diagnostic RuntimeError (with the exact target
    pose and index) only if every seed fails -- so a genuine reachability
    problem is easy to pinpoint instead of a bare traceback.
    """
    errors = []
    tried_ids = set()
    for seed in seeds:
        if seed is None:
            continue
        seed_id = id(seed)
        if seed_id in tried_ids:
            continue
        tried_ids.add(seed_id)
        try:
            return node.compute_ik(target, seed)
        except RuntimeError as e:
            errors.append(str(e))

    p = target.pose.position
    q = target.pose.orientation
    raise RuntimeError(
        f"IK failed at {waypoint_desc} for all {len(errors)} seed(s) tried.\n"
        f"  target position:    [{p.x:.4f}, {p.y:.4f}, {p.z:.4f}]\n"
        f"  target orientation (xyzw): [{q.x:.4f}, {q.y:.4f}, {q.z:.4f}, {q.w:.4f}]\n"
        f"  per-seed errors: {errors}\n"
        f"  This is a reachability/collision issue, not a script bug -- the target pose "
        f"itself has no valid IK solution (or triggers self/environment collision with "
        f"avoid_collisions=True). Try: a smaller ROTATION_ANGLE_DEG, a different "
        f"ROTATION_AXIS, a different TRANSLATION_DIRECTION, or a smaller "
        f"TRANSLATION_DISTANCE_M so B stays in a comfortable part of the workspace."
    )


def preflight_check(node, seed, checks):
    """
    checks: list of (label, pos, quat), given in the SAME ORDER the real run
    will visit them (A -> Down-A -> Hover-B -> Down-B, etc). Tests IK
    reachability for each BEFORE running the sweep, so a bad combo is caught
    in seconds instead of minutes into a run.

    Seeds are CHAINED: each check is seeded from the previous check's own
    solved joint config (falling back to the original seed if the previous
    check failed) -- exactly how the real run seeds each step. A fixed seed
    for every check (the old behavior) can make IK "fail" for a point that's
    actually reachable, just because it's a big jump in configuration space
    from the very first pose -- the local IK solver never gets a seed close
    enough to converge from.

    Returns a list of (label, passed_bool, seed_used_for_this_check) so a
    failure can be re-diagnosed with the same realistic seed.
    """
    results = []
    current_seed = seed
    for label, pos, quat in checks:
        target = make_pose(pos, quat)
        seed_used = current_seed
        try:
            joints = node.compute_ik(target, current_seed)
            print(f"  [preflight OK]   {label}")
            results.append((label, True, seed_used))
            js = JointState()
            js.name = JOINTS
            js.position = joints
            current_seed = js  # chain forward for the next check
        except RuntimeError as e:
            print(f"  [preflight FAIL] {label}: {e}")
            results.append((label, False, seed_used))
            # current_seed unchanged -- next check still gets the best seed we have
    return results


CANDIDATE_DIRECTIONS = {
    "-X (back toward base)": [-1, 0, 0],
    "+Y (left)":             [0, 1, 0],
    "-Y (right)":            [0, -1, 0],
    "+Z (up)":               [0, 0, 1],
    "-Z (down)":             [0, 0, -1],
    "+X+Y (diagonal)":       [1, 1, 0],
    "+X-Y (diagonal)":       [1, -1, 0],
    "-X+Z (diagonal)":       [-1, 0, 1],
}


def probe_max_distance(node, seed, pos_A, quat_A, direction, rotation_axis, rotation_angle_deg,
                        max_dist, tol=0.01):
    """
    Binary-search the farthest distance along `direction` (from pos_A) that
    still has a valid IK solution at orientation quat_A rotated by
    rotation_angle_deg about rotation_axis. Returns a distance in [0, max_dist].
    """
    direction = np.array(direction, dtype=float)
    direction = direction / np.linalg.norm(direction)
    quat_B = quat_mult(quat_A, axis_angle_quat(rotation_axis, np.radians(rotation_angle_deg))) \
        if rotation_angle_deg != 0.0 else quat_A

    def reachable(dist):
        pos_B = pos_A + direction * dist
        target = make_pose(pos_B, quat_B)
        try:
            node.compute_ik(target, seed)
            return True
        except RuntimeError:
            return False

    if not reachable(tol):
        return 0.0
    if reachable(max_dist):
        return max_dist

    lo, hi = tol, max_dist
    for _ in range(12):
        mid = (lo + hi) / 2.0
        if reachable(mid):
            lo = mid
        else:
            hi = mid
    return lo


def diagnose_unreachable_B(node, seed, pos_A, quat_A, rotation_axis, rotation_angle_deg,
                            requested_direction, requested_distance):
    """
    Runs automatically when Position B fails preflight. Reports how far the
    requested direction actually reaches (with and without the rotation), and
    scans alternate directions for ones that DO support the full requested
    distance + rotation -- so you get concrete numbers to plug back in
    instead of guessing.
    """
    print("\nAuto-diagnosing why Position B is unreachable...")

    max_d = probe_max_distance(node, seed, pos_A, quat_A, requested_direction,
                                rotation_axis, rotation_angle_deg, requested_distance)
    print(f"  Your direction {requested_direction} with {rotation_angle_deg:.0f} deg rotation: "
          f"max reachable ~{max_d * 100:.1f} cm (you asked for {requested_distance * 100:.0f} cm).")

    max_d_norot = probe_max_distance(node, seed, pos_A, quat_A, requested_direction,
                                      rotation_axis, 0.0, requested_distance)
    print(f"  Same direction with NO rotation: max reachable ~{max_d_norot * 100:.1f} cm.")

    print(f"  Scanning alternate directions at the full {requested_distance * 100:.0f} cm "
          f"with {rotation_angle_deg:.0f} deg rotation:")
    working = []
    for name, direction in CANDIDATE_DIRECTIONS.items():
        d = probe_max_distance(node, seed, pos_A, quat_A, direction,
                                rotation_axis, rotation_angle_deg, requested_distance)
        if d >= requested_distance - 1e-6:
            print(f"    {name:24s}: OK (full {requested_distance*100:.0f} cm reachable)")
            working.append((name, direction))
        else:
            print(f"    {name:24s}: max ~{d * 100:.1f} cm")

    print()
    if working:
        best_name, best_dir = working[0]
        print(f"  Suggestion: set TRANSLATION_DIRECTION = {best_dir}  ({best_name}) -- "
              f"reaches the full {requested_distance*100:.0f} cm with your {rotation_angle_deg:.0f} "
              f"deg rotation intact.")
    else:
        print(f"  No candidate direction supports the full {requested_distance*100:.0f} cm at "
              f"{rotation_angle_deg:.0f} deg rotation from this starting pose. Reduce "
              f"TRANSLATION_DISTANCE_M (try ~{max(max_d, max_d_norot)*100:.0f} cm) and/or "
              f"ROTATION_ANGLE_DEG, or start the script from a more central arm pose.")
    return working


def build_leg(node, start_pos, start_quat, end_pos, end_quat, peak_vel_deg_s, last_js,
              label, global_fallback_seed=None):
    """
    Build one trajectory leg (either A->B or B->A) at a trapezoidal
    angular-velocity profile peaking at peak_vel_deg_s. Position is
    interpolated along the same schedule so hand and wrist arrive together.
    """
    t_arr, s_arr, total_time, is_tri = trapezoid_schedule(
        ROTATION_ANGLE_DEG, peak_vel_deg_s, RAMP_TIME_S, DT)

    if is_tri:
        print(f"  [!] {label}: {peak_vel_deg_s:.1f} deg/s can't sustain a cruise segment "
              f"within {RAMP_TIME_S}s ramp for a {ROTATION_ANGLE_DEG:.0f} deg rotation -- "
              f"using triangular profile (peak reached briefly, no plateau). Consider a "
              f"larger ROTATION_ANGLE_DEG or shorter RAMP_TIME_S if you need a true cruise "
              f"window at this velocity.")

    wps = []
    seed = last_js
    prev_quat = None
    max_meas_vel = 0.0
    for idx, s in enumerate(s_arr):
        pos = np.array(start_pos) + s * (np.array(end_pos) - np.array(start_pos))
        quat = slerp(start_quat, end_quat, s)
        target = make_pose(pos, quat)

        joints = compute_ik_robust(
            node, target,
            seeds=[seed, last_js, global_fallback_seed],
            waypoint_desc=f"{label} waypoint {idx}/{len(s_arr) - 1} (s={s:.3f})"
        )
        wps.append(joints)
        js = JointState()
        js.name = JOINTS
        js.position = joints
        seed = js

        if prev_quat is not None:
            dt_local = t_arr[idx] - t_arr[idx - 1]
            if dt_local > 1e-6:
                dtheta = quat_angle_deg(prev_quat, quat)
                max_meas_vel = max(max_meas_vel, dtheta / dt_local)
        prev_quat = quat

    print(f"  {label}: {len(wps)} waypoints, duration {total_time:.2f}s, "
          f"max IK-plan angular rate ~{max_meas_vel:.1f} deg/s (target {peak_vel_deg_s:.1f} deg/s)")
    return wps, total_time, seed


def run_leg(node, start_pos, start_quat, end_pos, end_quat, peak_vel_deg_s, last_js, label,
            global_fallback_seed=None):
    wps, total_time, last_js = build_leg(node, start_pos, start_quat, end_pos, end_quat,
                                          peak_vel_deg_s, last_js, label,
                                          global_fallback_seed=global_fallback_seed)
    jump = safety_check(wps)
    if jump > MAX_JOINT_JUMP:
        print(f"  WARNING: joint jump {jump:.4f} rad exceeds {MAX_JOINT_JUMP} rad -- "
              f"SKIPPING this leg for safety.")
        return last_js

    print(f"=== RUN START | {label} | target_ang_vel={peak_vel_deg_s:.1f} deg/s | "
          f"duration={total_time:.2f}s ===")
    node.execute_trajectory(wps, total_time)
    print(f"=== RUN END   | {label} ===")
    return last_js



def check_transfer_path_safety(node, pos_A, quat_A, pos_B, quat_B, seed, global_fallback_seed=None):
    """
    Endpoint-only preflight (Position A and Position B each individually
    solvable) is NOT enough to guarantee the transfer is safe: two endpoints
    can both have valid IK solutions while the PATH between them passes near
    a kinematic singularity, where the solver flips to a wildly different
    joint configuration partway through -- or runs into a configuration with
    no IK solution at all, even though the endpoint itself is reachable via a
    different, disconnected solution branch. Either failure mode produces a
    dangerous jerk/dead end if not caught before the real run.

    This builds the real transfer trajectory at the FASTEST configured
    velocity level (VELOCITY_LEVELS_DEG_S max) -- NOT an arbitrary sampling.
    The fastest level has the fewest waypoints (shortest total_time at the
    same DT), so each real waypoint-to-waypoint step covers the LARGEST
    fraction of the path -- this is the actual worst case the real sweep
    will ever produce. A slower level always has MORE, finer-spaced
    waypoints along this same geometric path, so if the fastest level's per-
    step joint jump stays under MAX_JOINT_JUMP, every slower level will too.
    (An earlier version of this check used a fixed coarse sampling and a
    statistical-outlier heuristic instead -- it missed a near-singular region
    that only produced an excessive per-step jump once the sweep actually
    reached a higher, coarser-sampled velocity level.)

    Returns (max_jump, is_unsafe): max_jump is the worst per-step joint delta
    found; is_unsafe is True if it exceeds MAX_JOINT_JUMP, OR if some point
    along the path has no IK solution at all.
    """
    check_vel = max(VELOCITY_LEVELS_DEG_S)
    try:
        wps, _, _ = build_leg(node, pos_A, quat_A, pos_B, quat_B, check_vel, seed,
                               "PATH_SAFETY_CHECK", global_fallback_seed=global_fallback_seed)
    except RuntimeError as e:
        print(f"  Path check failed partway through (no IK solution): {str(e).splitlines()[0]}")
        return float("inf"), True

    max_jump = safety_check(wps)
    return max_jump, (max_jump > MAX_JOINT_JUMP)


def find_safe_transfer_direction(node, seed, start_pos, quat_A, rotation_axis, rotation_angle_deg,
                                  distance, global_fallback_seed=None):
    """
    Runs automatically when the requested TRANSLATION_DIRECTION's transfer
    path fails the path-safety check. Scans the same candidate directions
    used for endpoint reachability, but this time checks PATH continuity
    rather than just whether the two endpoints are individually solvable --
    so it won't recommend a direction that looks fine at A and B but still
    clips a singularity in between.
    """
    print("\nScanning alternate directions for one with a clean (singularity-free) path...")
    working = []
    for name, direction in CANDIDATE_DIRECTIONS.items():
        direction_arr = np.array(direction, dtype=float)
        direction_arr = direction_arr / np.linalg.norm(direction_arr)
        pos_B_candidate = start_pos + direction_arr * distance
        quat_B_candidate = quat_mult(quat_A, axis_angle_quat(rotation_axis, np.radians(rotation_angle_deg)))
        jump, is_unsafe = check_transfer_path_safety(node, start_pos, quat_A, pos_B_candidate,
                                                      quat_B_candidate, seed,
                                                      global_fallback_seed=global_fallback_seed)
        if not is_unsafe:
            status = "OK (clean path)"
            working.append((name, direction))
        elif jump == float("inf"):
            status = "path hits a dead end (no IK solution partway through)"
        else:
            status = f"path jump {jump:.3f} rad exceeds {MAX_JOINT_JUMP} rad limit"
        print(f"    {name:24s}: {status}")

    print()
    if working:
        best_name, best_dir = working[0]
        print(f"  Suggestion: set TRANSLATION_DIRECTION = {best_dir}  ({best_name}) -- "
              f"clean path, no mid-transfer singularity.")
    else:
        print("  None of the candidate directions have a clean path at the full requested "
              "distance/rotation from this starting pose. Try a smaller TRANSLATION_DISTANCE_M "
              "and/or ROTATION_ANGLE_DEG, or start the script from a pose further from the base "
              "(kinematic singularities are common directly above/near the base column).")
    return working


def main():
    rclpy.init()
    node = PickPlaceMover()

    start_js_msg = node.wait_joint_state()
    name_to_pos = dict(zip(start_js_msg.name, start_js_msg.position))
    START_JOINTS = [name_to_pos[j] for j in JOINTS]  # exact joint config to return to

    tf = node.wait_tf()
    start_pos = np.array([tf.transform.translation.x, tf.transform.translation.y, tf.transform.translation.z])
    start_quat = [tf.transform.rotation.x, tf.transform.rotation.y, tf.transform.rotation.z, tf.transform.rotation.w]

    # pos_A = current arm pose (pick). pos_B = pos_A + TRANSLATION_DISTANCE_M
    # along TRANSLATION_DIRECTION (place). Orientation A = current;
    # orientation B = A rotated by ROTATION_ANGLE_DEG about ROTATION_AXIS.
    quat_A = start_quat
    quat_B = quat_mult(start_quat, axis_angle_quat(ROTATION_AXIS, np.radians(ROTATION_ANGLE_DEG)))
    pos_A = start_pos

    active_direction = list(TRANSLATION_DIRECTION)
    hover_a_ok = hover_b_ok = False
    seed_a = seed_b = start_js_msg
    pos_B = None

    # Try the configured direction first; if EITHER the hover-point preflight
    # OR the path-continuity check fails, auto-adopt the first working
    # alternative found and retry automatically -- instead of aborting and
    # making you edit/re-run by hand.
    for attempt in range(3):
        direction = np.array(active_direction, dtype=float)
        direction = direction / np.linalg.norm(direction)
        pos_B = start_pos + direction * TRANSLATION_DISTANCE_M
        quat_B = quat_mult(start_quat, axis_angle_quat(ROTATION_AXIS, np.radians(ROTATION_ANGLE_DEG)))

        print(f"\n{'Retrying' if attempt else 'Using'} TRANSLATION_DIRECTION = {active_direction}")
        print(f"Position A (pick)  = {pos_A}")
        print(f"Position B (place) = {pos_B}  ({TRANSLATION_DISTANCE_M*100:.0f} cm from A)")
        print(f"Rotation A->B = {ROTATION_ANGLE_DEG:.0f} deg about axis {ROTATION_AXIS}")

        print("Running preflight IK checks (before starting the sweep)...")
        preflight_results = preflight_check(node, start_js_msg, [
            ("Position A (pick)", pos_A, quat_A),
            ("Position B (place)", pos_B, quat_B),
        ])
        results_map = {label: (passed, seed_used) for label, passed, seed_used in preflight_results}
        hover_a_ok, seed_a = results_map["Position A (pick)"]
        hover_b_ok, seed_b = results_map["Position B (place)"]

        if not (hover_a_ok and hover_b_ok):
            working = []
            if not hover_b_ok:
                working = diagnose_unreachable_B(node, start_js_msg, pos_A, quat_A,
                                                  ROTATION_AXIS, ROTATION_ANGLE_DEG,
                                                  active_direction, TRANSLATION_DISTANCE_M)
            if attempt < 2 and working:
                best_name, best_dir = working[0]
                print(f"\nAuto-adopting a working direction and retrying: "
                      f"TRANSLATION_DIRECTION = {best_dir}  ({best_name})")
                active_direction = best_dir
                continue
            print(f"\nPreflight check FAILED -- a hover point itself is unreachable, and no "
                  f"working alternate direction was found. Aborting before the sweep (nothing "
                  f"was moved). Update TRANSLATION_DIRECTION/DISTANCE/ROTATION by hand, "
                  f"then re-run.")
            rclpy.shutdown()
            return

        # Hover points both pass -- now check the PATH between them (two
        # individually-reachable endpoints can still have an unsafe path
        # between them, e.g. a mid-transfer singularity).
        print("Checking the A->B transfer path for mid-path singularities (not just endpoints)...")
        fwd_jump, fwd_singular = check_transfer_path_safety(node, pos_A, quat_A, pos_B, quat_B,
                                                             seed_a, global_fallback_seed=start_js_msg)
        if fwd_singular:
            path_ok = False
            print(f"  A->B path: FAILED (skipping the redundant B->A check of the same line)")
        else:
            back_jump, back_singular = check_transfer_path_safety(node, pos_B, quat_B, pos_A, quat_A,
                                                                    seed_b, global_fallback_seed=start_js_msg)
            path_ok = not back_singular
            print(f"  A->B path: OK (max step {fwd_jump:.4f} rad)   "
                  f"B->A path: {'OK' if path_ok else 'FAILED'} (max step {back_jump:.4f} rad)")

        if path_ok:
            print("  Path OK -- no mid-transfer singularity detected.")
            break  # this direction works end-to-end, proceed with it

        working = find_safe_transfer_direction(node, seed_a, pos_A, quat_A, ROTATION_AXIS,
                                                ROTATION_ANGLE_DEG, TRANSLATION_DISTANCE_M,
                                                global_fallback_seed=start_js_msg)
        if attempt < 2 and working:
            best_name, best_dir = working[0]
            print(f"\nAuto-adopting a working direction and retrying: "
                  f"TRANSLATION_DIRECTION = {best_dir}  ({best_name})")
            active_direction = best_dir
            continue

        print(f"\nPreflight check FAILED -- the A<->B transfer path passes near a kinematic "
              f"singularity or dead end, and no working alternate direction was found. "
              f"Aborting before the sweep (nothing was moved). Update TRANSLATION_DIRECTION "
              f"by hand, then re-run.")
        rclpy.shutdown()
        return

    print("\nPreflight OK.\n")

    print(f"At A. Hold {TAP_HOLD}s -- TAP NOW for sync (start your ARKit/Franka pose logger now).")
    time.sleep(TAP_HOLD)

    last_js = start_js_msg

    for level_idx, vel in enumerate(VELOCITY_LEVELS_DEG_S):
        print(f"\n########## VELOCITY LEVEL {level_idx + 1}/{len(VELOCITY_LEVELS_DEG_S)}: "
              f"{vel} deg/s ##########")

        last_js = run_leg(node, pos_A, quat_A, pos_B, quat_B, vel, last_js,
                           label=f"PICK_TO_PLACE_v{vel}", global_fallback_seed=start_js_msg)
        print(f"  At B. Holding {HOLD_AT_ENDPOINT}s.")
        time.sleep(HOLD_AT_ENDPOINT)

        last_js = run_leg(node, pos_B, quat_B, pos_A, quat_A, vel, last_js,
                           label=f"PLACE_TO_PICK_v{vel}", global_fallback_seed=start_js_msg)
        print(f"  At A. Holding {HOLD_AT_ENDPOINT}s.")
        time.sleep(HOLD_AT_ENDPOINT)

        # Snap back to the EXACT original joint configuration (not just an
        # IK-equivalent pose) so every level starts from an identical
        # physical configuration -- IK is redundant for this 6-DoF pose on a
        # 7-DoF arm, so "same end-effector pose" doesn't guarantee "same
        # elbow/joint configuration" after many seeded IK solves in a row.
        print(f"  Resetting to exact starting joint configuration before next level...")
        node.move_to_joint(START_JOINTS, duration_sec=2)
        last_js = start_js_msg

    # Final explicit return to the exact starting joint configuration.
    print("\nReturning to exact starting joint configuration...")
    node.move_to_joint(START_JOINTS, duration_sec=2)
    print("Sweep complete. Back at the exact starting location. You can stop your pose logger now.")
    rclpy.shutdown()


if __name__ == '__main__':
    main()