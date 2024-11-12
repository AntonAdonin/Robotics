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
            package='action_turtle_commands',
            executable='server',
        ),
    ])