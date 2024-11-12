import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import tf2_ros
from turtlesim.srv import Spawn
from turtlesim.msg import Pose
from std_srvs.srv import Empty
import math
from tf2_ros import TransformException

class Turtle2Listener(Node):
    def __init__(self):
        super().__init__('turtle2_tf2_listener')
        self.delay = self.declare_parameter('delay', 2.0).value
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.publisher = self.create_publisher(Twist, '/turtle2/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.on_timer)

    def on_timer(self):
        try:
            now = rclpy.time.Time()
            past = self.get_clock().now() - rclpy.duration.Duration(seconds=self.delay)
            trans = self.tf_buffer.lookup_transform_full(
                target_frame='turtle2',
                target_time=now,
                source_frame='turtle1',
                source_time=past,
                fixed_frame='world',
                timeout=rclpy.duration.Duration(seconds=1.0)
            )            
        except TransformException as ex:
            self.get_logger().info(
                        f'Could not transform turtle2 to turtle1: {ex}')
            return
        try:
            msg = Twist()
            msg.angular.z = 4.0 * math.atan2(trans.transform.translation.y, trans.transform.translation.x)
            msg.linear.x = 0.5 * math.sqrt(trans.transform.translation.x ** 2 + trans.transform.translation.y ** 2)
            self.publisher.publish(msg)
        except Exception as e:
            self.get_logger().info(f"error: {e}")
        

def main():
    rclpy.init()
    node = Turtle2Listener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()

if __name__ == '__main__':
    main()
