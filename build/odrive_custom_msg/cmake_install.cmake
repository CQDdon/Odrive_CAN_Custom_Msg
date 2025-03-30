# Install script for directory: /home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/odrive_custom_msg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/install/odrive_custom_msg")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/odrive_custom_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/odrive_custom_msg/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_c/odrive_custom_msg/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/odrive_custom_msg/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_typesupport_fastrtps_c/odrive_custom_msg/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/odrive_custom_msg/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_cpp/odrive_custom_msg/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/odrive_custom_msg/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_typesupport_fastrtps_cpp/odrive_custom_msg/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/odrive_custom_msg/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_typesupport_introspection_c/odrive_custom_msg/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so"
         OLD_RPATH "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/odrive_custom_msg/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_typesupport_introspection_cpp/odrive_custom_msg/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/libodrive_custom_msg__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg-0.0.0-py3.12.egg-info" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_python/odrive_custom_msg/odrive_custom_msg.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg" TYPE DIRECTORY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/home/ddon/miniconda3/bin/python3" "-m" "compileall"
        "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/install/odrive_custom_msg/lib/python3.12/site-packages/odrive_custom_msg"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so"
         OLD_RPATH "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg:/home/ddon/miniconda3/lib:/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_fastrtps_c.cpython-312-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so"
         OLD_RPATH "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg:/home/ddon/miniconda3/lib:/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_introspection_c.cpython-312-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so"
         OLD_RPATH "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg:/home/ddon/miniconda3/lib:/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/odrive_custom_msg/odrive_custom_msg_s__rosidl_typesupport_c.cpython-312-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_generator_py/odrive_custom_msg/libodrive_custom_msg__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so"
         OLD_RPATH "/home/ddon/miniconda3/lib:/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libodrive_custom_msg__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_adapter/odrive_custom_msg/msg/CANmsg.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_adapter/odrive_custom_msg/msg/Control.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/odrive_custom_msg/msg/CANmsg.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/odrive_custom_msg/msg/Control.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/odrive_custom_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/odrive_custom_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/environment" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_index/share/ament_index/resource_index/packages/odrive_custom_msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cppExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/odrive_custom_msg__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport.cmake"
         "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/CMakeFiles/Export/share/odrive_custom_msg/cmake/export_odrive_custom_msg__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg/cmake" TYPE FILE FILES
    "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_core/odrive_custom_msgConfig.cmake"
    "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/ament_cmake_core/odrive_custom_msgConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/odrive_custom_msg" TYPE FILE FILES "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/odrive_custom_msg/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/odrive_custom_msg__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/odrive_custom_msg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
