cmake_minimum_required(VERSION 3.8)
project(odrive_custom_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(odrive_custom_msg REQUIRED)

############################################################
# Create executable for rbc25_ctrl
add_executable(rbc25_ctrl src/rbc25_ctrl.cpp)
ament_target_dependencies(rbc25_ctrl rclcpp odrive_custom_msg)

# Create executable for can_sender
add_executable(can_sender src/can_sender.cpp)
ament_target_dependencies(can_sender rclcpp odrive_custom_msg)

install(TARGETS
  #don't forget to change the node's name here
  rbc25_ctrl
  can_sender
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
