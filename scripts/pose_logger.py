import rclpy
from rclpy.node import Node
import tf2_ros
import json
import time
import numpy as np
import sys

class PoseLogger(Node):
    def __init__(self, filename, target_frame='panda_link0', source_frame='panda_link8'):
        super().__init__('pose_logger')
        self.filename = filename
        self.target_frame = target_frame
        self.source_frame = source_frame
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.data = {}
        self.timer = self.create_timer(1.0/30.0, self.log_pose)  # exact 30 Hz # 30 Hz
        self._warn_count = 0
        self._last_warn_logged = 0

    def log_pose(self):
        try:
            t = self.tf_buffer.lookup_transform(self.target_frame, self.source_frame, rclpy.time.Time())
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
            # Reduce log spam: only warn occasionally
            self._warn_count += 1
            if self._warn_count % 10 == 1:
                self.get_logger().warn(f"TF lookup failed: {e} (target={self.target_frame}, source={self.source_frame})")

    def save(self):
        with open(self.filename, 'w') as f:
            json.dump(self.data, f, indent=2)
        print(f"Saved {len(self.data)} entries to {self.filename}")

def main():
    rclpy.init()
    filename = sys.argv[1] if len(sys.argv) > 1 else f"panda_trans_{int(time.time())}.json"
    target_frame = sys.argv[2] if len(sys.argv) > 2 else 'panda_link0'
    source_frame = sys.argv[3] if len(sys.argv) > 3 else 'panda_link8'
    node = PoseLogger(filename, target_frame, source_frame)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        try:
            node.save()
        except Exception as e:
            print(f"Failed to save poses: {e}")
        try:
            rclpy.shutdown()
        except Exception:
            pass

if __name__ == '__main__':
    main()
