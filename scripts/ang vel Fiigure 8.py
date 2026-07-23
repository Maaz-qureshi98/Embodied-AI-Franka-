"""
figure8_velocity_sweep.py

Purpose
-------
Find the tracking threshold at which ARKit pose tracking starts to diverge 
from the true Franka pose using a Figure-8 motion across multiple angular velocity levels.
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

JOINTS = ['panda_joint1','panda_joint2','panda_joint3','panda_joint4',
          'panda_joint5','panda_joint6','panda_joint7']

# ----------------------------------------------------------------------------
# EXPERIMENT PARAMETERS
# ----------------------------------------------------------------------------
TAP_HOLD = 5.0             # seconds held at start before starting sweep
HOLD_AT_ENDPOINT = 2.0     # seconds held between velocity levels
LOOPS = 2
STEPS_PER_LOOP = 120
HEIGHT = 0.15
DEPTH = 0.12

MAX_ROLL_DEG = 55.0      
MAX_PITCH_DEG = 55.0     
MAX_YAW_DEG = 50.0       
MAX_JOINT_JUMP = 0.15

# The 15 angular velocity levels from the velocity sweep architecture
VELOCITY_LEVELS_DEG_S = [5, 10, 15, 18, 20, 23, 28, 30, 33, 35, 40, 45, 50, 55, 65]

# ----------------------------------------------------------------------------
# Math helpers
# ----------------------------------------------------------------------------
def quat_mult(q1, q2):
    x1,y1,z1,w1 = q1
    x2,y2,z2,w2 = q2
    return [
        w1*x2 + x1*w2 + y1*z2 - z1*y2,
        w1*y2 - x1*z2 + y1*w2 + z1*x2,
        w1*z2 + x1*y2 - y1*x2 + z1*w2,
        w1*w2 - x1*x2 - y1*y2 - z1*z2
    ]

def axis_angle_quat(axis, angle_rad):
    axis = np.array(axis) / np.linalg.norm(axis)
    s = np.sin(angle_rad/2)
    return [axis[0]*s, axis[1]*s, axis[2]*s, np.cos(angle_rad/2)]

def ease_in_out(t):
    return 0.5 * (1 - np.cos(np.pi * t))

def quat_angle_deg(q0, q1):
    q0 = np.array(q0)
    q1 = np.array(q1)
    dot = abs(np.dot(q0, q1))
    dot = min(1.0, max(-1.0, dot))
    return np.degrees(2 * np.arccos(dot))


class Figure8SweepMover(Node):
    def __init__(self):
        super().__init__('figure8_velocity_sweep')
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
        Sends positions AND estimated velocities at every waypoint using central
        difference to prevent stuttering/jerking during high-speed tracking.
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

    def move_to_joint(self, positions, duration_sec=3.0):
        self.execute_trajectory([positions], duration_sec)


def generate_figure8_poses(base_pos, base_quat):
    """Generates the full sequence of geometric targets and total angular distance."""
    poses = []
    total_steps = LOOPS * STEPS_PER_LOOP
    total_ang_distance = 0.0
    prev_quat = base_quat

    for i in range(total_steps + 1):
        frac = i / total_steps
        envelope = ease_in_out(frac)
        t = 2 * np.pi * (i / STEPS_PER_LOOP)

        loop_num = i // STEPS_PER_LOOP
        amp_scale = 1.0 + 0.15 * loop_num

        dz = HEIGHT * amp_scale * np.sin(t) * envelope
        dy = DEPTH * amp_scale * np.sin(t) * np.cos(t) * envelope

        roll_deg = MAX_ROLL_DEG * np.sin(t) * envelope
        pitch_deg = MAX_PITCH_DEG * np.cos(t) * envelope
        yaw_deg = MAX_YAW_DEG * np.sin(2*t) * envelope   

        roll_q = axis_angle_quat([1, 0, 0], np.radians(roll_deg))
        pitch_q = axis_angle_quat([0, 1, 0], np.radians(pitch_deg))
        yaw_q = axis_angle_quat([0, 0, 1], np.radians(yaw_deg))
        
        delta_q = quat_mult(quat_mult(roll_q, pitch_q), yaw_q)
        quat = quat_mult(base_quat, delta_q)

        total_ang_distance += quat_angle_deg(prev_quat, quat)
        prev_quat = quat

        target = PoseStamped()
        target.header.frame_id = "panda_link0"
        target.pose.position.x = base_pos[0]
        target.pose.position.y = base_pos[1] + dy
        target.pose.position.z = base_pos[2] + dz
        target.pose.orientation.x = quat[0]
        target.pose.orientation.y = quat[1]
        target.pose.orientation.z = quat[2]
        target.pose.orientation.w = quat[3]
        poses.append(target)

    return poses, total_ang_distance


def main():
    rclpy.init()
    node = Figure8SweepMover()

    middle_js_msg = node.wait_joint_state()
    name_to_pos = dict(zip(middle_js_msg.name, middle_js_msg.position))
    MIDDLE_JOINTS = [name_to_pos[j] for j in JOINTS]

    tf = node.wait_tf()
    base_pos = np.array([tf.transform.translation.x, tf.transform.translation.y, tf.transform.translation.z])
    base_quat = [tf.transform.rotation.x, tf.transform.rotation.y, tf.transform.rotation.z, tf.transform.rotation.w]

    print("Generating Figure-8 geometry and calculating total rotation path...")
    targets, total_angular_distance = generate_figure8_poses(base_pos, base_quat)
    print(f"Total accumulated angular path distance: {total_angular_distance:.2f} degrees.")

    print("\nRunning baseline preflight IK resolution over the entire trajectory map...")
    waypoints_template = []
    last_js = middle_js_msg
    
    try:
        for idx, target in enumerate(targets):
            joints = node.compute_ik(target, last_js)
            waypoints_template.append(joints)
            js = JointState()
            js.name = JOINTS
            js.position = joints
            last_js = js
    except RuntimeError as e:
        print(f"\nPreflight FAILED: Path contains an unreachable or singular configuration: {e}")
        rclpy.shutdown()
        return

    # Safety Jump Check
    max_jump = 0.0
    for i in range(1, len(waypoints_template)):
        jump = max(abs(a - b) for a, b in zip(waypoints_template[i], waypoints_template[i-1]))
        max_jump = max(max_jump, jump)
    print(f"Max joint jump check: {max_jump:.4f} rad")

    if max_jump > MAX_JOINT_JUMP:
        print(f"WARNING: Joint jump {max_jump:.4f} rad exceeds threshold limits. Aborting sweep.")
        rclpy.shutdown()
        return

    print("Preflight check passed successfully.\n")
    print(f"Holding for {TAP_HOLD}s -- START YOUR LOGGERS NOW.")
    time.sleep(TAP_HOLD)

    # --- SWEEP EXECUTION LOOP ---
    for level_idx, vel in enumerate(VELOCITY_LEVELS_DEG_S):
        print(f"\n########## VELOCITY LEVEL {level_idx + 1}/{len(VELOCITY_LEVELS_DEG_S)}: {vel} deg/s ##########")
        
        # Calculate appropriate track time dynamically based on the target velocity step
        calculated_duration = total_angular_distance / vel
        print(f"  Executing path scaled to {calculated_duration:.2f} seconds.")

        print(f"=== RUN START | FIGURE8_v{vel} | target_ang_vel={vel:.1f} deg/s | duration={calculated_duration:.2f}s ===")
        node.execute_trajectory(waypoints_template, calculated_duration)
        print(f"=== RUN END   | FIGURE8_v{vel} ===")

        print(f"  Holding at endpoint configuration for {HOLD_AT_ENDPOINT}s...")
        time.sleep(HOLD_AT_ENDPOINT)

        # Snap back to identical physical baseline via Joint Space targeting
        print("  Resetting to exact deterministic starting configuration...")
        node.move_to_joint(MIDDLE_JOINTS, duration_sec=3.0)
        time.sleep(1.0)

    print("\nSweep Complete. Arm returned safely to baseline. Stopping loggers.")
    rclpy.shutdown()

if __name__ == '__main__':
    main()