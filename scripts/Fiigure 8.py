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

TAP_HOLD = 5
LOOPS = 2
STEPS_PER_LOOP = 120
TOTAL_TIME = 30.0
HEIGHT = 0.15
DEPTH = 0.12
MAX_ROLL_DEG = 55.0      # rotation about X -- increased
MAX_PITCH_DEG = 55.0     # rotation about Y -- increased
MAX_YAW_DEG = 50.0       # rotation about Z -- new, adds a third axis
MAX_JOINT_JUMP = 0.15

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

class Figure8Mover(Node):
    def __init__(self):
        super().__init__('figure8_mover')
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
        self.traj_client.wait_for_server()
        goal = FollowJointTrajectory.Goal()
        goal.trajectory.joint_names = JOINTS
        n = len(waypoints)
        points = []
        for i, positions in enumerate(waypoints):
            t = total_time * (i / (n - 1))
            pt = JointTrajectoryPoint()
            pt.positions = positions
            pt.time_from_start.sec = int(t)
            pt.time_from_start.nanosec = int((t % 1) * 1e9)
            points.append(pt)
        goal.trajectory.points = points
        future = self.traj_client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future)
        handle = future.result()
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)

def main():
    rclpy.init()
    node = Figure8Mover()

    middle_js_msg = node.wait_joint_state()
    name_to_pos = dict(zip(middle_js_msg.name, middle_js_msg.position))
    MIDDLE = [name_to_pos[j] for j in JOINTS]

    tf = node.wait_tf()
    base_pos = np.array([tf.transform.translation.x, tf.transform.translation.y, tf.transform.translation.z])
    base_quat = [tf.transform.rotation.x, tf.transform.rotation.y, tf.transform.rotation.z, tf.transform.rotation.w]

    print(f"At MIDDLE. Hold {TAP_HOLD}s -- TAP NOW for sync.")
    time.sleep(TAP_HOLD)

    last_js = middle_js_msg
    waypoints = []

    total_steps = LOOPS * STEPS_PER_LOOP

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
        yaw_deg = MAX_YAW_DEG * np.sin(2*t) * envelope   # different frequency -- more variety

        roll_q = axis_angle_quat([1, 0, 0], np.radians(roll_deg))
        pitch_q = axis_angle_quat([0, 1, 0], np.radians(pitch_deg))
        yaw_q = axis_angle_quat([0, 0, 1], np.radians(yaw_deg))
        delta_q = quat_mult(quat_mult(roll_q, pitch_q), yaw_q)
        quat = quat_mult(base_quat, delta_q)

        target = PoseStamped()
        target.header.frame_id = "panda_link0"
        target.pose.position.x = base_pos[0]
        target.pose.position.y = base_pos[1] + dy
        target.pose.position.z = base_pos[2] + dz
        target.pose.orientation.x = quat[0]
        target.pose.orientation.y = quat[1]
        target.pose.orientation.z = quat[2]
        target.pose.orientation.w = quat[3]

        joints = node.compute_ik(target, last_js)
        waypoints.append(joints)

        js = JointState()
        js.name = JOINTS
        js.position = joints
        last_js = js

        if i % 40 == 0:
            print(f"Point {i}/{total_steps}, roll={roll_deg:.1f}, pitch={pitch_deg:.1f}, yaw={yaw_deg:.1f}")

    # Safety check
    max_jump = 0.0
    for i in range(1, len(waypoints)):
        jump = max(abs(a - b) for a, b in zip(waypoints[i], waypoints[i-1]))
        max_jump = max(max_jump, jump)
    print(f"Max joint jump between consecutive waypoints: {max_jump:.4f} rad")

    if max_jump > MAX_JOINT_JUMP:
        print(f"WARNING: joint jump {max_jump:.4f} rad exceeds {MAX_JOINT_JUMP} rad -- ABORTING.")
        rclpy.shutdown()
        return

    print("Safety check passed. Executing trajectory...")
    node.execute_trajectory(waypoints, TOTAL_TIME)
    print("Figure-8 complete.")

    node.execute_trajectory([waypoints[-1], MIDDLE], 1.5)
    print("Back at MIDDLE. Done.")

    rclpy.shutdown()

if __name__ == '__main__':
    main()