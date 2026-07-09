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
STEPS_PER_SEGMENT = 30
SEGMENT_TOTAL_TIME = 4.0   # whole segment takes this long, spread over all steps

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

def slerp(q0, q1, t):
    q0 = np.array(q0); q1 = np.array(q1)
    dot = np.dot(q0, q1)
    if dot < 0:
        q1 = -q1
        dot = -dot
    if dot > 0.9995:
        result = q0 + t*(q1 - q0)
        return (result / np.linalg.norm(result)).tolist()
    theta0 = np.arccos(dot)
    theta = theta0 * t
    q2 = q1 - q0*dot
    q2 = q2 / np.linalg.norm(q2)
    return (q0*np.cos(theta) + q2*np.sin(theta)).tolist()

# smoothstep easing -- zero velocity at start/end, smooth acceleration in between
def ease(t):
    return t*t*(3 - 2*t)

class SegmentMover(Node):
    def __init__(self):
        super().__init__('segment_mover')
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
        """waypoints: list of joint-angle lists. Sends as ONE smooth trajectory."""
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

def build_waypoints(node, start_pos, start_quat, end_pos, end_quat, last_js, label):
    waypoints = []
    for i in range(STEPS_PER_SEGMENT + 1):
        t_raw = i / STEPS_PER_SEGMENT
        t = ease(t_raw)   # smooth easing instead of linear
        pos = np.array(start_pos) + t * (np.array(end_pos) - np.array(start_pos))
        quat = slerp(start_quat, end_quat, t)

        target = PoseStamped()
        target.header.frame_id = "panda_link0"
        target.pose.position.x = pos[0]
        target.pose.position.y = pos[1]
        target.pose.position.z = pos[2]
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

    print(f"{label}: built {len(waypoints)} waypoints")
    return waypoints, last_js

def main():
    rclpy.init()
    node = SegmentMover()

    middle_js_msg = node.wait_joint_state()
    name_to_pos = dict(zip(middle_js_msg.name, middle_js_msg.position))
    MIDDLE = [name_to_pos[j] for j in JOINTS]

    tf = node.wait_tf()
    base_pos = np.array([tf.transform.translation.x, tf.transform.translation.y, tf.transform.translation.z])
    base_quat = [tf.transform.rotation.x, tf.transform.rotation.y, tf.transform.rotation.z, tf.transform.rotation.w]

    print(f"At MIDDLE. Hold {TAP_HOLD}s -- TAP NOW for sync.")
    time.sleep(TAP_HOLD)

    last_js = middle_js_msg

    def segment(delta_pos, rot_axis, rot_deg, label):
        nonlocal last_js
        end_pos = base_pos + np.array(delta_pos)
        end_quat = quat_mult(base_quat, axis_angle_quat(rot_axis, np.radians(rot_deg)))

        wp_out, last_js = build_waypoints(node, base_pos, base_quat, end_pos, end_quat, last_js, f"{label}-OUT")
        node.execute_trajectory(wp_out, SEGMENT_TOTAL_TIME)

        wp_back, last_js = build_waypoints(node, end_pos, end_quat, base_pos, base_quat, last_js, f"{label}-BACK")
        node.execute_trajectory(wp_back, SEGMENT_TOTAL_TIME)

    # Segment 1: X +15cm, rotate +90 deg about X axis
    segment([0.15, 0, 0], [1,0,0], 90, "X")

    # Segment 2: Z +25cm (up), rotate -90 deg about Y axis
    segment([0, 0, 0.25], [0,1,0], -90, "Z")

    # Segment 3: quarter-arc in X-Z with 45 deg twist about Z
    arc_steps = STEPS_PER_SEGMENT
    R = 0.10
    wp_arc = []
    for i in range(arc_steps + 1):
        t_raw = i / arc_steps
        t = ease(t_raw)
        angle = (np.pi/2) * t
        dx = R * np.sin(angle)
        dz = R * (1 - np.cos(angle))
        delta_q = axis_angle_quat([0,0,1], np.radians(45) * t)
        quat = quat_mult(base_quat, delta_q)

        target = PoseStamped()
        target.header.frame_id = "panda_link0"
        target.pose.position.x = base_pos[0] + dx
        target.pose.position.y = base_pos[1]
        target.pose.position.z = base_pos[2] + dz
        target.pose.orientation.x = quat[0]
        target.pose.orientation.y = quat[1]
        target.pose.orientation.z = quat[2]
        target.pose.orientation.w = quat[3]

        joints = node.compute_ik(target, last_js)
        wp_arc.append(joints)
        js = JointState(); js.name = JOINTS; js.position = joints
        last_js = js
    node.execute_trajectory(wp_arc, SEGMENT_TOTAL_TIME)
    print("ARC-OUT done")

    wp_arc_back = []
    for i in range(arc_steps + 1):
        t_raw = i / arc_steps
        t = ease(t_raw)
        angle = (np.pi/2) * (1 - t)
        dx = R * np.sin(angle)
        dz = R * (1 - np.cos(angle))
        delta_q = axis_angle_quat([0,0,1], np.radians(45) * (1-t))
        quat = quat_mult(base_quat, delta_q)

        target = PoseStamped()
        target.header.frame_id = "panda_link0"
        target.pose.position.x = base_pos[0] + dx
        target.pose.position.y = base_pos[1]
        target.pose.position.z = base_pos[2] + dz
        target.pose.orientation.x = quat[0]
        target.pose.orientation.y = quat[1]
        target.pose.orientation.z = quat[2]
        target.pose.orientation.w = quat[3]

        joints = node.compute_ik(target, last_js)
        wp_arc_back.append(joints)
        js = JointState(); js.name = JOINTS; js.position = joints
        last_js = js
    node.execute_trajectory(wp_arc_back, SEGMENT_TOTAL_TIME)
    print("ARC-BACK done")

    node.execute_trajectory([MIDDLE, MIDDLE], 1.5)
    print("Back at MIDDLE. Done.")
    rclpy.shutdown()

if __name__ == '__main__':
    main()
