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

# Include any dependencies generated for this target.
include CMakeFiles/blob_debug.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/blob_debug.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/blob_debug.dir/flags.make

CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: CMakeFiles/blob_debug.dir/flags.make
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: ../src/blob_detection_debug.cpp
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: ../manifest.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/cpp_common/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/catkin/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/genmsg/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/gencpp/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/genlisp/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/genpy/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/message_generation/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/rostime/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/roscpp_traits/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/roscpp_serialization/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/message_runtime/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/rosbuild/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/rosconsole/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/std_msgs/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/rosgraph_msgs/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/xmlrpcpp/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/roscpp/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/message_filters/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/class_loader/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/rospack/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/roslib/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/pluginlib/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/geometry_msgs/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/sensor_msgs/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/image_transport/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/diagnostic_msgs/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/diagnostic_updater/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /opt/ros/indigo/share/self_test/package.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /home/pedro/quadcopter/rosbuild/quad_msgs/manifest.xml
CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o: /home/pedro/quadcopter/rosbuild/quad_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o -c /home/pedro/quadcopter/rosbuild/cam/src/blob_detection_debug.cpp

CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pedro/quadcopter/rosbuild/cam/src/blob_detection_debug.cpp > CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.i

CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pedro/quadcopter/rosbuild/cam/src/blob_detection_debug.cpp -o CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.s

CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.requires:
.PHONY : CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.requires

CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.provides: CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.requires
	$(MAKE) -f CMakeFiles/blob_debug.dir/build.make CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.provides.build
.PHONY : CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.provides

CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.provides.build: CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o

# Object files for target blob_debug
blob_debug_OBJECTS = \
"CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o"

# External object files for target blob_debug
blob_debug_EXTERNAL_OBJECTS =

../bin/blob_debug: CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o
../bin/blob_debug: CMakeFiles/blob_debug.dir/build.make
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libtinyxml.so
../bin/blob_debug: /usr/lib/libPocoFoundation.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_signals.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/blob_debug: /usr/lib/liblog4cxx.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_thread.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libpthread.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
../bin/blob_debug: ../lib/libblob_detection.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libtinyxml.so
../bin/blob_debug: /usr/lib/libPocoFoundation.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_signals.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/blob_debug: /usr/lib/liblog4cxx.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libboost_thread.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libpthread.so
../bin/blob_debug: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
../bin/blob_debug: CMakeFiles/blob_debug.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/blob_debug"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/blob_debug.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/blob_debug.dir/build: ../bin/blob_debug
.PHONY : CMakeFiles/blob_debug.dir/build

CMakeFiles/blob_debug.dir/requires: CMakeFiles/blob_debug.dir/src/blob_detection_debug.cpp.o.requires
.PHONY : CMakeFiles/blob_debug.dir/requires

CMakeFiles/blob_debug.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/blob_debug.dir/cmake_clean.cmake
.PHONY : CMakeFiles/blob_debug.dir/clean

CMakeFiles/blob_debug.dir/depend:
	cd /home/pedro/quadcopter/rosbuild/cam/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pedro/quadcopter/rosbuild/cam /home/pedro/quadcopter/rosbuild/cam /home/pedro/quadcopter/rosbuild/cam/build /home/pedro/quadcopter/rosbuild/cam/build /home/pedro/quadcopter/rosbuild/cam/build/CMakeFiles/blob_debug.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/blob_debug.dir/depend

