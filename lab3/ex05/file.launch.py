import os
from lab4.ex02.my_pkg.launch.launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
        ),
        Node(
            package='move_to_goal',
            executable='move_to_goal_node',
            ros_arguments=["-p", "x:=10.0", "-p","y:=10.0", "-p","theta:=90.0"],
        ),
    ])