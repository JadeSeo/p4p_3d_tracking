import launch
from launch.substitutions import Command, LaunchConfiguration
import launch_ros
import os

import sys
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
	pkgPath = launch_ros.substitutions.FindPackageShare(package =' urdf_tm').find('urdf_tm')
	urdfModelPath = os.path.join(pkgPath, 'urdf/model.urdf')
	
	
	args = []
	length = len(sys.argv)
	if (len(sys.argv) >= 5):
		i = 4
		while i < len(sys.argv):
			args.append(sys.argv[i])
			i = i + 1
	
	
	with open(urdfModelPath, 'r') as infp:
		robot_desc = infp.read()
	
	params = {'robot_description': robot_desc}
	
	robot_state_publisher_node = launch_ros.actions.Node(
		package = 'robot_state_publisher',
		executable = 'robot_state_publisher',
		output = 'screen',
		parameters = [params]
	)
	
	joint_state_publisher_node = launch_ros.actions.Node(
		package = 'joint_state_publisher',
		executable = 'joint_state_publisher',
		name = 'joint_state_publisher',
		parameters = [params],
		condition = launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
	)
	
	joint_state_publisher_gui_node = launch_ros.actions.Node(
		package = 'joint_state_publisher_gui',
		executable = 'joint_state_publisher_gui',
		name = 'joint_state_publisher_gui',
		condition = launch.conditions.IfCondition(LaunchConfiguration('gui'))
	)
	
	rviz_node = launch_ros.actions.Node(
		package = 'rviz2',
		executable = 'rviz2',
		name = 'rviz2',
		output = 'screen'
	)
	
	
	tm_driver_node = launch_ros.actions.Node(
		package = 'tm_driver',
		executable = 'tm_driver',
		output = 'screen',
		arguments=  args,
	)
	
	
	return launch.LaunchDescription([
		launch.actions.DeclareLaunchArgument(name = 'gui', default_value = 'True', description = 'This is a flag for joint_state_publisher_gui'),
		launch.actions.DeclareLaunchArgument(name = 'model', default_value = urdfModelPath, description = 'Path to the urdf model file'),
		robot_state_publisher_node,
		joint_state_publisher_node,
		joint_state_publisher_gui_node,
		rviz_node,
		tm_driver_node
	])


