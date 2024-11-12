import os
from ament_index_python.packages import get_package_share_directory
from lab4.ex02.my_pkg.launch.launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            namespace='turtlesim1',
            name='sim'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            namespace='turtlesim2',
            name='sim'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            namespace='turtlesim3',
            name='sim'
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic1',
            remappings=[
                ('/input/pose', '/turtlesim1/turtle1/pose'),
                ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
            ]
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic2',
            remappings=[
                ('/input/pose', '/turtlesim2/turtle1/pose'),
                ('/output/cmd_vel', '/turtlesim3/turtle1/cmd_vel'),
            ]
        ),
    ])