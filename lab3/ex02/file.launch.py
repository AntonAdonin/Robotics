import os
from launch import LaunchDescription
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
        Node(
            package='action_turtle_commands',
            executable='client',
        ),
    ])