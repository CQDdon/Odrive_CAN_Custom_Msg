# CMake generated Testfile for 
# Source directory: /home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package
# Build directory: /home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/home/ddon/miniconda3/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/cppcheck.xunit.xml" "--package-name" "can_control_package" "--output-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/cppcheck.xunit.xml" "--include_dirs" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;48;ament_package;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;0;")
add_test(flake8 "/home/ddon/miniconda3/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/flake8.xunit.xml" "--package-name" "can_control_package" "--output-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/ament_flake8/flake8.txt" "--command" "/opt/ros/humble/bin/ament_flake8" "--xunit-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_flake8.cmake;63;ament_add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;48;ament_package;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;0;")
add_test(lint_cmake "/home/ddon/miniconda3/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/lint_cmake.xunit.xml" "--package-name" "can_control_package" "--output-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;48;ament_package;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;0;")
add_test(pep257 "/home/ddon/miniconda3/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/pep257.xunit.xml" "--package-name" "can_control_package" "--output-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/ament_pep257/pep257.txt" "--command" "/opt/ros/humble/bin/ament_pep257" "--xunit-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;48;ament_package;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;0;")
add_test(uncrustify "/home/ddon/miniconda3/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/uncrustify.xunit.xml" "--package-name" "can_control_package" "--output-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;48;ament_package;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;0;")
add_test(xmllint "/home/ddon/miniconda3/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/xmllint.xunit.xml" "--package-name" "can_control_package" "--output-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/build/can_control_package/test_results/can_control_package/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;48;ament_package;/home/ddon/ros2_ws_cpp/src/robocon2024/Odrive_CAN_Custom_Msg/can_control_package/CMakeLists.txt;0;")
