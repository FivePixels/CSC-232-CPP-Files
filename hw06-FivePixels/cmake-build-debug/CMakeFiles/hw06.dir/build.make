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
CMAKE_SOURCE_DIR = /Users/dylanbolger/CLionProjects/hw06-FivePixels

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw06.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw06.dir/flags.make

CMakeFiles/hw06.dir/src/main.cpp.o: CMakeFiles/hw06.dir/flags.make
CMakeFiles/hw06.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw06.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw06.dir/src/main.cpp.o -c /Users/dylanbolger/CLionProjects/hw06-FivePixels/src/main.cpp

CMakeFiles/hw06.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw06.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dylanbolger/CLionProjects/hw06-FivePixels/src/main.cpp > CMakeFiles/hw06.dir/src/main.cpp.i

CMakeFiles/hw06.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw06.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dylanbolger/CLionProjects/hw06-FivePixels/src/main.cpp -o CMakeFiles/hw06.dir/src/main.cpp.s

CMakeFiles/hw06.dir/src/NotFoundException.cpp.o: CMakeFiles/hw06.dir/flags.make
CMakeFiles/hw06.dir/src/NotFoundException.cpp.o: ../src/NotFoundException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw06.dir/src/NotFoundException.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw06.dir/src/NotFoundException.cpp.o -c /Users/dylanbolger/CLionProjects/hw06-FivePixels/src/NotFoundException.cpp

CMakeFiles/hw06.dir/src/NotFoundException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw06.dir/src/NotFoundException.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dylanbolger/CLionProjects/hw06-FivePixels/src/NotFoundException.cpp > CMakeFiles/hw06.dir/src/NotFoundException.cpp.i

CMakeFiles/hw06.dir/src/NotFoundException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw06.dir/src/NotFoundException.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dylanbolger/CLionProjects/hw06-FivePixels/src/NotFoundException.cpp -o CMakeFiles/hw06.dir/src/NotFoundException.cpp.s

# Object files for target hw06
hw06_OBJECTS = \
"CMakeFiles/hw06.dir/src/main.cpp.o" \
"CMakeFiles/hw06.dir/src/NotFoundException.cpp.o"

# External object files for target hw06
hw06_EXTERNAL_OBJECTS =

hw06: CMakeFiles/hw06.dir/src/main.cpp.o
hw06: CMakeFiles/hw06.dir/src/NotFoundException.cpp.o
hw06: CMakeFiles/hw06.dir/build.make
hw06: CMakeFiles/hw06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hw06"
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E copy_if_different /Users/dylanbolger/CLionProjects/hw06-FivePixels/resource/mainData.txt /Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw06.dir/build: hw06

.PHONY : CMakeFiles/hw06.dir/build

CMakeFiles/hw06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw06.dir/clean

CMakeFiles/hw06.dir/depend:
	cd /Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dylanbolger/CLionProjects/hw06-FivePixels /Users/dylanbolger/CLionProjects/hw06-FivePixels /Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug /Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug /Users/dylanbolger/CLionProjects/hw06-FivePixels/cmake-build-debug/CMakeFiles/hw06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw06.dir/depend
