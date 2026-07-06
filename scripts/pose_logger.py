import rclpy
from rclpy.node import Node
import tf2_ros
import json
import time
import numpy as np
import sys

class PoseLogger(Node):
    def __init__(self, filename):
        super().__init__('pose_logger')
        self.filename = filename
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.data = {}
        self.timer = self.create_timer(0.02, self.log_pose)

    def log_pose(self):
        try:
            t = self.tf_buffer.lookup_transform('panda_link0', 'panda_link8', rclpy.time.Time())
            q = t.transform.rotation
            pos = t.transform.translation

            x, y, z, w = q.x, q.y, q.z, q.w
            R = np.array([
                [1-2*(y*y+z*z), 2*(x*y-z*w),   2*(x*z+y*w)],
                [2*(x*y+z*w),   1-2*(x*x+z*z), 2*(y*z-x*w)],
                [2*(x*z-y*w),   2*(y*z+x*w),   1-2*(x*x+y*y)]
            ])

            M = np.eye(4)
            M[:3, :3] = R
            M[:3, 3] = [pos.x, pos.y, pos.z]
            flat = M.flatten(order='F').tolist()

            timestamp = str(time.time())
            self.data[timestamp] = str(flat)

        except Exception as e:
            self.get_logger().warn(f"TF lookup failed: {e}")

    def save(self):
        with open(self.filename, 'w') as f:
            json.dump(self.data, f, indent=2)
        print(f"Saved {len(self.data)} entries to {self.filename}")

def main():
    rclpy.init()
    filename = sys.argv[1] if len(sys.argv) > 1 else f"panda_trans_{int(time.time())}.json"
    node = PoseLogger(filename)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.save()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
