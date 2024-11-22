from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='Odrive_Controller',
            executable='odrive_controller',
            name='odrive_controller_0',
            parameters=[{'node_id': 0, 'interface': 'can0'}]
        ),
        Node(
            package='Odrive_Controller',
            executable='odrive_controller',
            name='odrive_controller_1',
            parameters=[{'node_id': 1, 'interface': 'can0'}]
        ),
        Node(
            package='Odrive_Controller',
            executable='odrive_controller',
            name='odrive_controller_2',
            parameters=[{'node_id': 2, 'interface': 'can0'}]
        ),
        Node(
            package='Odrive_Controller',
            executable='can_sender',
            name='can_sender'
        ),
        # Test node to publish messages to control_data_0, control_data_1, control_data_2
        Node(
            package='Odrive_Controller',
            executable='test_publisher',
            name='test_publisher'
        ),
    ])
