import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class MoveToGoalNode(Node):
    def __init__(self):
        super().__init__('move_to_goal_node')
        

        self.declare_parameter('x', 5.544445)
        self.declare_parameter('y', 5.544445)
        self.declare_parameter('theta', 0.0)
        
        self.goal_x = self.get_parameter('x').get_parameter_value().double_value
        self.goal_y = self.get_parameter('y').get_parameter_value().double_value
        self.goal_theta = self.get_parameter('theta').get_parameter_value().double_value
        self.get_logger().info(f"Initializing node with goal: x={self.goal_x} y={self.goal_y} theta={self.goal_theta}")
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscription = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10)
        
        self.current_pose = None
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.running = True

    def pose_callback(self, msg):
        self.current_pose = msg

    def timer_callback(self):
        if self.current_pose is None:
            return
        
        delta_x = self.goal_x - self.current_pose.x
        delta_y = self.goal_y - self.current_pose.y
        delta_theta = math.radians(self.goal_theta) - self.current_pose.theta
        
        distance = math.sqrt(delta_x**2 + delta_y**2)
        
        angle_to_goal = math.atan2(delta_y, delta_x)
    
        twist_msg = Twist()
        self.get_logger().info(f"Distance to goal: {distance}")
        
        

        if distance > 0.1:
            twist_msg.linear.x = 2 * distance
            twist_msg.angular.z = 6 * (angle_to_goal - self.current_pose.theta)
        else:
            twist_msg.angular.z = 6 * delta_theta
            
            
            
        if distance < 0.1 and abs(delta_theta) < 0.01:
            self.running = False
            self.get_logger().info("Goal reached! Stopping the node.")
            self.timer.cancel()
        
        self.publisher_.publish(twist_msg)
        
        
        

def main(args=None):
    rclpy.init(args=args)
    print(args)

    node = MoveToGoalNode()
    
    while rclpy.ok() and node.running:
        rclpy.spin_once(node)
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
