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
CMAKE_SOURCE_DIR = /Users/dylanbolger/CLionProjects/lab12-FivePixels

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab12Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab12Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab12Test.dir/flags.make

CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.o: CMakeFiles/lab12Test.dir/flags.make
CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.o: ../test/google_test_runner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.o -c /Users/dylanbolger/CLionProjects/lab12-FivePixels/test/google_test_runner.cpp

CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dylanbolger/CLionProjects/lab12-FivePixels/test/google_test_runner.cpp > CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.i

CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dylanbolger/CLionProjects/lab12-FivePixels/test/google_test_runner.cpp -o CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.s

# Object files for target lab12Test
lab12Test_OBJECTS = \
"CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.o"

# External object files for target lab12Test
lab12Test_EXTERNAL_OBJECTS =

lab12Test: CMakeFiles/lab12Test.dir/test/google_test_runner.cpp.o
lab12Test: CMakeFiles/lab12Test.dir/build.make
lab12Test: lib/libgtest_maind.a
lab12Test: lib/libgtestd.a
lab12Test: CMakeFiles/lab12Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab12Test"
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E copy_if_different /Users/dylanbolger/CLionProjects/lab12-FivePixels/resource/testData.txt /Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab12Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab12Test.dir/build: lab12Test

.PHONY : CMakeFiles/lab12Test.dir/build

CMakeFiles/lab12Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab12Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab12Test.dir/clean

CMakeFiles/lab12Test.dir/depend:
	cd /Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dylanbolger/CLionProjects/lab12-FivePixels /Users/dylanbolger/CLionProjects/lab12-FivePixels /Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug /Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug /Users/dylanbolger/CLionProjects/lab12-FivePixels/cmake-build-debug/CMakeFiles/lab12Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab12Test.dir/depend

