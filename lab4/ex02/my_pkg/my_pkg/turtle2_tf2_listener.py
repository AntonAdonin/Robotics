import rclpy
from rclpy.node import Node
import tf2_ros
from geometry_msgs.msg import Twist
import math

from tf2_ros import TransformException

class Turtle2Listener(Node):
    def __init__(self):
        super().__init__('turtle2_tf2_listener')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.publisher = self.create_publisher(Twist, '/turtle2/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.to_frame_rel = 'turtle2'
        self.from_frame_rel = 'carrot'

    def timer_callback(self):
        try:
            
            trans = self.tf_buffer.lookup_transform(self.to_frame_rel, self.from_frame_rel, rclpy.time.Time())
        except TransformException as ex:
            self.get_logger().info(
                        f'Could not transform {self.to_frame_rel} to {self.from_frame_rel}: {ex}')
            return

        msg = Twist()
        msg.linear.x = 0.5 * math.sqrt(trans.transform.translation.x ** 2 + trans.transform.translation.y ** 2)
        msg.angular.z = 4.0 * math.atan2(trans.transform.translation.y, trans.transform.translation.x)
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = Turtle2Listener()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
