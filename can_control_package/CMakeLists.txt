cmake_minimum_required(VERSION 3.8)
project(can_control_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(odrive_custom_msg REQUIRED)

############################################################
# Create executable for rbc25_ctrl
add_executable(rbc25_ctrl src/rbc25_ctrl.cpp)
ament_target_dependencies(rbc25_ctrl rclcpp odrive_custom_msg)

# Create executable for can_sender
add_executable(can_sender src/can_sender.cpp)
ament_target_dependencies(can_sender rclcpp odrive_custom_msg)

# Create executable for test_node
add_executable(test_node src/test_node.cpp)
ament_target_dependencies(test_node rclcpp odrive_custom_msg)

add_executable(calibration_publisher src/calib.cpp)
ament_target_dependencies(calibration_publisher rclcpp std_msgs)

include_directories(include)

install(TARGETS
  #don't forget to change the node's name here
  calibration_publisher
  rbc25_ctrl
  can_sender
  test_node
  DESTINATION lib/${PROJECT_NAME})
############################################################

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
