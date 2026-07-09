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
import copy

JOINTS = ['panda_joint1','panda_joint2','panda_joint3','panda_joint4',
          'panda_joint5','panda_joint6','panda_joint7']

H = 0.15          # half of 30cm box -> 15cm offset each direction
HOLD = 2          # seconds to hold at each corner
TAP_HOLD = 5      # seconds at middle before starting (tap sync)
MOVE_DURATION = 3 # seconds per motion segment

class CubeMover(Node):
    def __init__(self):
        super().__init__('cube_mover')
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

    def compute_ik(self, target_pose_stamped):
        self.ik_client.wait_for_service()
        js = self.wait_joint_state()

        req = GetPositionIK.Request()
        req.ik_request = PositionIKRequest()
        req.ik_request.group_name = "panda_arm"
        req.ik_request.pose_stamped = target_pose_stamped
        req.ik_request.timeout.sec = 2
        req.ik_request.avoid_collisions = True

        seed = RobotState()
        seed.joint_state = js
        req.ik_request.robot_state = seed

        future = self.ik_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        result = future.result()

        if result.error_code.val != 1:
            raise RuntimeError(f"IK failed, error code: {result.error_code.val}")

        name_to_pos = dict(zip(result.solution.joint_state.name,
                                result.solution.joint_state.position))
        return [name_to_pos[j] for j in JOINTS]

    def move_to_joint(self, positions, duration_sec=MOVE_DURATION):
        self.traj_client.wait_for_server()
        goal = FollowJointTrajectory.Goal()
        goal.trajectory.joint_names = JOINTS
        pt = JointTrajectoryPoint()
        pt.positions = positions
        pt.time_from_start.sec = duration_sec
        goal.trajectory.points = [pt]
        future = self.traj_client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future)
        handle = future.result()
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)

def go(node, base_pose, dx=0.0, dy=0.0, dz=0.0, label=""):
    target = copy.deepcopy(base_pose)
    target.pose.position.x += dx
    target.pose.position.y += dy
    target.pose.position.z += dz
    joints = node.compute_ik(target)
    node.move_to_joint(joints)
    print(f"At {label}. Hold {HOLD}s.")
    time.sleep(HOLD)

def main():
    rclpy.init()
    node = CubeMover()

    middle_joints_msg = node.wait_joint_state()
    name_to_pos = dict(zip(middle_joints_msg.name, middle_joints_msg.position))
    MIDDLE = [name_to_pos[j] for j in JOINTS]

    tf = node.wait_tf()
    base_pose = PoseStamped()
    base_pose.header.frame_id = "panda_link0"
    base_pose.pose.position.x = tf.transform.translation.x
    base_pose.pose.position.y = tf.transform.translation.y
    base_pose.pose.position.z = tf.transform.translation.z
    base_pose.pose.orientation = tf.transform.rotation

    print(f"At MIDDLE. Hold {TAP_HOLD}s -- TAP NOW for sync.")
    time.sleep(TAP_HOLD)

    # Bottom square (z = -H)
    go(node, base_pose, dx=-H, dy=-H, dz=-H, label="BOTTOM-FRONT-LEFT")
    go(node, base_pose, dx= H, dy=-H, dz=-H, label="BOTTOM-FRONT-RIGHT")
    go(node, base_pose, dx= H, dy= H, dz=-H, label="BOTTOM-BACK-RIGHT")
    go(node, base_pose, dx=-H, dy= H, dz=-H, label="BOTTOM-BACK-LEFT")
    go(node, base_pose, dx=-H, dy=-H, dz=-H, label="BOTTOM-FRONT-LEFT (close)")

    # Top square (z = +H)
    go(node, base_pose, dx=-H, dy=-H, dz= H, label="TOP-FRONT-LEFT")
    go(node, base_pose, dx= H, dy=-H, dz= H, label="TOP-FRONT-RIGHT")
    go(node, base_pose, dx= H, dy= H, dz= H, label="TOP-BACK-RIGHT")
    go(node, base_pose, dx=-H, dy= H, dz= H, label="TOP-BACK-LEFT")
    go(node, base_pose, dx=-H, dy=-H, dz= H, label="TOP-FRONT-LEFT (close)")

    node.move_to_joint(MIDDLE)
    print("Back at MIDDLE. Done.")

    rclpy.shutdown()

if __name__ == '__main__':
    main()
