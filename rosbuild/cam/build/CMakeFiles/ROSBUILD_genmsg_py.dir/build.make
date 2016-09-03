# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pedro/quadcopter/rosbuild/cam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pedro/quadcopter/rosbuild/cam/build

# Utility rule file for ROSBUILD_genmsg_py.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_genmsg_py.dir/progress.make

CMakeFiles/ROSBUILD_genmsg_py: ../src/cam/msg/__init__.py

../src/cam/msg/__init__.py: ../src/cam/msg/_QuadPoseList.py
../src/cam/msg/__init__.py: ../src/cam/msg/_detections.py
../src/cam/msg/__init__.py: ../src/cam/msg/_QuadPose.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/cam/msg/__init__.py"
	/opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py --initpy /home/pedro/quadcopter/rosbuild/cam/msg/QuadPoseList.msg /home/pedro/quadcopter/rosbuild/cam/msg/detections.msg /home/pedro/quadcopter/rosbuild/cam/msg/QuadPose.msg

../src/cam/msg/_QuadPoseList.py: ../msg/QuadPoseList.msg
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/lib/roslib/gendeps
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/std_msgs/msg/Header.msg
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/geometry_msgs/msg/Quaternion.msg
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/geometry_msgs/msg/Point.msg
../src/cam/msg/_QuadPoseList.py: ../msg/QuadPose.msg
../src/cam/msg/_QuadPoseList.py: ../manifest.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/cpp_common/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/catkin/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/genmsg/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/gencpp/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/genlisp/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/genpy/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/message_generation/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/rostime/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/roscpp_traits/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/roscpp_serialization/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/message_runtime/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/rosbuild/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/rosconsole/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/std_msgs/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/rosgraph_msgs/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/xmlrpcpp/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/roscpp/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/message_filters/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/class_loader/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/rospack/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/roslib/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/pluginlib/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/geometry_msgs/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/sensor_msgs/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/image_transport/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/diagnostic_msgs/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/diagnostic_updater/package.xml
../src/cam/msg/_QuadPoseList.py: /opt/ros/indigo/share/self_test/package.xml
../src/cam/msg/_QuadPoseList.py: /home/pedro/quadcopter/rosbuild/quad_msgs/manifest.xml
../src/cam/msg/_QuadPoseList.py: /home/pedro/quadcopter/rosbuild/quad_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/cam/msg/_QuadPoseList.py"
	/opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/pedro/quadcopter/rosbuild/cam/msg/QuadPoseList.msg

../src/cam/msg/_detections.py: ../msg/detections.msg
../src/cam/msg/_detections.py: /opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py
../src/cam/msg/_detections.py: /opt/ros/indigo/lib/roslib/gendeps
../src/cam/msg/_detections.py: /opt/ros/indigo/share/std_msgs/msg/Header.msg
../src/cam/msg/_detections.py: ../manifest.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/cpp_common/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/catkin/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/genmsg/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/gencpp/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/genlisp/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/genpy/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/message_generation/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/rostime/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/roscpp_traits/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/roscpp_serialization/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/message_runtime/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/rosbuild/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/rosconsole/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/std_msgs/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/rosgraph_msgs/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/xmlrpcpp/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/roscpp/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/message_filters/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/class_loader/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/rospack/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/roslib/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/pluginlib/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/geometry_msgs/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/sensor_msgs/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/image_transport/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/diagnostic_msgs/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/diagnostic_updater/package.xml
../src/cam/msg/_detections.py: /opt/ros/indigo/share/self_test/package.xml
../src/cam/msg/_detections.py: /home/pedro/quadcopter/rosbuild/quad_msgs/manifest.xml
../src/cam/msg/_detections.py: /home/pedro/quadcopter/rosbuild/quad_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/cam/msg/_detections.py"
	/opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/pedro/quadcopter/rosbuild/cam/msg/detections.msg

../src/cam/msg/_QuadPose.py: ../msg/QuadPose.msg
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/lib/roslib/gendeps
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/geometry_msgs/msg/Quaternion.msg
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/geometry_msgs/msg/Point.msg
../src/cam/msg/_QuadPose.py: ../manifest.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/cpp_common/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/catkin/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/genmsg/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/gencpp/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/genlisp/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/genpy/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/message_generation/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/rostime/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/roscpp_traits/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/roscpp_serialization/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/message_runtime/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/rosbuild/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/rosconsole/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/std_msgs/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/rosgraph_msgs/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/xmlrpcpp/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/roscpp/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/message_filters/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/class_loader/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/rospack/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/roslib/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/pluginlib/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/geometry_msgs/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/sensor_msgs/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/image_transport/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/diagnostic_msgs/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/diagnostic_updater/package.xml
../src/cam/msg/_QuadPose.py: /opt/ros/indigo/share/self_test/package.xml
../src/cam/msg/_QuadPose.py: /home/pedro/quadcopter/rosbuild/quad_msgs/manifest.xml
../src/cam/msg/_QuadPose.py: /home/pedro/quadcopter/rosbuild/quad_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/cam/msg/_QuadPose.py"
	/opt/ros/indigo/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/pedro/quadcopter/rosbuild/cam/msg/QuadPose.msg

ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py
ROSBUILD_genmsg_py: ../src/cam/msg/__init__.py
ROSBUILD_genmsg_py: ../src/cam/msg/_QuadPoseList.py
ROSBUILD_genmsg_py: ../src/cam/msg/_detections.py
ROSBUILD_genmsg_py: ../src/cam/msg/_QuadPose.py
ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py.dir/build.make
.PHONY : ROSBUILD_genmsg_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_genmsg_py.dir/build: ROSBUILD_genmsg_py
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/build

CMakeFiles/ROSBUILD_genmsg_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/clean

CMakeFiles/ROSBUILD_genmsg_py.dir/depend:
	cd /home/pedro/quadcopter/rosbuild/cam/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pedro/quadcopter/rosbuild/cam /home/pedro/quadcopter/rosbuild/cam /home/pedro/quadcopter/rosbuild/cam/build /home/pedro/quadcopter/rosbuild/cam/build /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles/ROSBUILD_genmsg_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/depend

