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
include CMakeFiles/bitmap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bitmap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bitmap.dir/flags.make

CMakeFiles/bitmap.dir/testBitmap.cpp.o: CMakeFiles/bitmap.dir/flags.make
CMakeFiles/bitmap.dir/testBitmap.cpp.o: ../testBitmap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bitmap.dir/testBitmap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bitmap.dir/testBitmap.cpp.o -c /home/mosch/CLionProjects/Lecture07/testBitmap.cpp

CMakeFiles/bitmap.dir/testBitmap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bitmap.dir/testBitmap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/testBitmap.cpp > CMakeFiles/bitmap.dir/testBitmap.cpp.i

CMakeFiles/bitmap.dir/testBitmap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bitmap.dir/testBitmap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/testBitmap.cpp -o CMakeFiles/bitmap.dir/testBitmap.cpp.s

CMakeFiles/bitmap.dir/testBitmap.cpp.o.requires:

.PHONY : CMakeFiles/bitmap.dir/testBitmap.cpp.o.requires

CMakeFiles/bitmap.dir/testBitmap.cpp.o.provides: CMakeFiles/bitmap.dir/testBitmap.cpp.o.requires
	$(MAKE) -f CMakeFiles/bitmap.dir/build.make CMakeFiles/bitmap.dir/testBitmap.cpp.o.provides.build
.PHONY : CMakeFiles/bitmap.dir/testBitmap.cpp.o.provides

CMakeFiles/bitmap.dir/testBitmap.cpp.o.provides.build: CMakeFiles/bitmap.dir/testBitmap.cpp.o


# Object files for target bitmap
bitmap_OBJECTS = \
"CMakeFiles/bitmap.dir/testBitmap.cpp.o"

# External object files for target bitmap
bitmap_EXTERNAL_OBJECTS =

bitmap: CMakeFiles/bitmap.dir/testBitmap.cpp.o
bitmap: CMakeFiles/bitmap.dir/build.make
bitmap: CMakeFiles/bitmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bitmap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bitmap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bitmap.dir/build: bitmap

.PHONY : CMakeFiles/bitmap.dir/build

CMakeFiles/bitmap.dir/requires: CMakeFiles/bitmap.dir/testBitmap.cpp.o.requires

.PHONY : CMakeFiles/bitmap.dir/requires

CMakeFiles/bitmap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bitmap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bitmap.dir/clean

CMakeFiles/bitmap.dir/depend:
	cd /home/mosch/CLionProjects/Lecture07/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mosch/CLionProjects/Lecture07 /home/mosch/CLionProjects/Lecture07 /home/mosch/CLionProjects/Lecture07/cmake-build-debug /home/mosch/CLionProjects/Lecture07/cmake-build-debug /home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles/bitmap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bitmap.dir/depend

