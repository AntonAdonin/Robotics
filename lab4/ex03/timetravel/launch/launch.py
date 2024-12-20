import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    delay = LaunchConfiguration('delay', default='5.0')

    return LaunchDescription([
            DeclareLaunchArgument(
            'delay',
            default_value='5.0',
            description='Time delay in seconds for the second turtle to follow the first turtle'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        ExecuteProcess(
            cmd=['ros2','service','call','/spawn','turtlesim/srv/Spawn', '{x: 2.0, y: 2.0, theta: 0.0, name: "turtle2"}'],
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='turtle_teleop_key',
            name='teleop',
            prefix='xterm -e'
        ),
        Node(
            package='timetravel',
            executable='turtle1_tf2_broadcaster',
            name='broadcaster1',
            parameters=[{'turtlename': 'turtle1'}]
        ),
        Node(
            package='timetravel',
            executable='turtle2_tf2_broadcaster',
            name='broadcaster2',
            parameters=[{'turtlename': 'turtle2'}]
        ),
        Node(
            package='timetravel',
            executable='turtle2_tf2_listener',
            name='listener',
            parameters=[{'delay': delay}]
        ),
    ])
