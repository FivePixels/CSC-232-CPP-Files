# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dylanbolger/CLionProjects/hw04-FivePixels

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw04Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw04Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw04Test.dir/flags.make

CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.o: CMakeFiles/hw04Test.dir/flags.make
CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.o: ../test/google_test_runner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.o -c /Users/dylanbolger/CLionProjects/hw04-FivePixels/test/google_test_runner.cpp

CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dylanbolger/CLionProjects/hw04-FivePixels/test/google_test_runner.cpp > CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.i

CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dylanbolger/CLionProjects/hw04-FivePixels/test/google_test_runner.cpp -o CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.s

# Object files for target hw04Test
hw04Test_OBJECTS = \
"CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.o"

# External object files for target hw04Test
hw04Test_EXTERNAL_OBJECTS =

hw04Test: CMakeFiles/hw04Test.dir/test/google_test_runner.cpp.o
hw04Test: CMakeFiles/hw04Test.dir/build.make
hw04Test: lib/libgtest_maind.a
hw04Test: lib/libgtestd.a
hw04Test: CMakeFiles/hw04Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw04Test"
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E copy_if_different /Users/dylanbolger/CLionProjects/hw04-FivePixels/resource/testData.txt /Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw04Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw04Test.dir/build: hw04Test

.PHONY : CMakeFiles/hw04Test.dir/build

CMakeFiles/hw04Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw04Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw04Test.dir/clean

CMakeFiles/hw04Test.dir/depend:
	cd /Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dylanbolger/CLionProjects/hw04-FivePixels /Users/dylanbolger/CLionProjects/hw04-FivePixels /Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug /Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug /Users/dylanbolger/CLionProjects/hw04-FivePixels/cmake-build-debug/CMakeFiles/hw04Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw04Test.dir/depend

