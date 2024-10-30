import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String


class TextToCmdVel(Node):

    def __init__(self):
        super().__init__('text_to_cmd_vel')
        self.subscription = self.create_subscription(
            String,
            'cmd_text',
            self.callback,
            10)
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

    def callback(self, msg):
        logger = self.get_logger()
        logger.info(f'Get message: {msg.data}')
        result = Twist()
        match msg.data:
            case "turn_right":
                result.angular.z = -1.5
                logger.info('Send Right')
            case "turn_left":
                result.angular.z = 1.5
                logger.info('Send Left')
            case "move_forward":
                result.linear.x = 2.0
                logger.info('Send Forward')
            case "move_backward":
                result.linear.x = -2.0
                logger.info('Send Backward')
            case _:
                logger.info(f'Got unspecifiend msg: {msg.data}')
        self.publisher.publish(result)


def main(args=None):
    rclpy.init(args=args)

    text_to_cmd_vel = TextToCmdVel()

    rclpy.spin(text_to_cmd_vel)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    text_to_cmd_vel.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()