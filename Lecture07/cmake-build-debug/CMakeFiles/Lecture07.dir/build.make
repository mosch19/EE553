# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/mosch/Downloads/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/mosch/Downloads/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mosch/CLionProjects/Lecture07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mosch/CLionProjects/Lecture07/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lecture07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lecture07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lecture07.dir/flags.make

CMakeFiles/Lecture07.dir/main.cpp.o: CMakeFiles/Lecture07.dir/flags.make
CMakeFiles/Lecture07.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lecture07.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lecture07.dir/main.cpp.o -c /home/mosch/CLionProjects/Lecture07/main.cpp

CMakeFiles/Lecture07.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lecture07.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/main.cpp > CMakeFiles/Lecture07.dir/main.cpp.i

CMakeFiles/Lecture07.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lecture07.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/main.cpp -o CMakeFiles/Lecture07.dir/main.cpp.s

CMakeFiles/Lecture07.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Lecture07.dir/main.cpp.o.requires

CMakeFiles/Lecture07.dir/main.cpp.o.provides: CMakeFiles/Lecture07.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lecture07.dir/build.make CMakeFiles/Lecture07.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Lecture07.dir/main.cpp.o.provides

CMakeFiles/Lecture07.dir/main.cpp.o.provides.build: CMakeFiles/Lecture07.dir/main.cpp.o


# Object files for target Lecture07
Lecture07_OBJECTS = \
"CMakeFiles/Lecture07.dir/main.cpp.o"

# External object files for target Lecture07
Lecture07_EXTERNAL_OBJECTS =

Lecture07: CMakeFiles/Lecture07.dir/main.cpp.o
Lecture07: CMakeFiles/Lecture07.dir/build.make
Lecture07: CMakeFiles/Lecture07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lecture07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lecture07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lecture07.dir/build: Lecture07

.PHONY : CMakeFiles/Lecture07.dir/build

CMakeFiles/Lecture07.dir/requires: CMakeFiles/Lecture07.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Lecture07.dir/requires

CMakeFiles/Lecture07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lecture07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lecture07.dir/clean

CMakeFiles/Lecture07.dir/depend:
	cd /home/mosch/CLionProjects/Lecture07/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mosch/CLionProjects/Lecture07 /home/mosch/CLionProjects/Lecture07 /home/mosch/CLionProjects/Lecture07/cmake-build-debug /home/mosch/CLionProjects/Lecture07/cmake-build-debug /home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles/Lecture07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lecture07.dir/depend

