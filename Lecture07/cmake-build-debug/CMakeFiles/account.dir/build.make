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
include CMakeFiles/account.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/account.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/account.dir/flags.make

CMakeFiles/account.dir/main.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/account.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/main.cpp.o -c /home/mosch/CLionProjects/Lecture07/main.cpp

CMakeFiles/account.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/main.cpp > CMakeFiles/account.dir/main.cpp.i

CMakeFiles/account.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/main.cpp -o CMakeFiles/account.dir/main.cpp.s

CMakeFiles/account.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/main.cpp.o.requires

CMakeFiles/account.dir/main.cpp.o.provides: CMakeFiles/account.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/main.cpp.o.provides

CMakeFiles/account.dir/main.cpp.o.provides.build: CMakeFiles/account.dir/main.cpp.o


CMakeFiles/account.dir/Account.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/Account.cpp.o: ../Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/account.dir/Account.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/Account.cpp.o -c /home/mosch/CLionProjects/Lecture07/Account.cpp

CMakeFiles/account.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/Account.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/Account.cpp > CMakeFiles/account.dir/Account.cpp.i

CMakeFiles/account.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/Account.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/Account.cpp -o CMakeFiles/account.dir/Account.cpp.s

CMakeFiles/account.dir/Account.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/Account.cpp.o.requires

CMakeFiles/account.dir/Account.cpp.o.provides: CMakeFiles/account.dir/Account.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/Account.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/Account.cpp.o.provides

CMakeFiles/account.dir/Account.cpp.o.provides.build: CMakeFiles/account.dir/Account.cpp.o


CMakeFiles/account.dir/floodFill.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/floodFill.cpp.o: ../floodFill.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/account.dir/floodFill.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/floodFill.cpp.o -c /home/mosch/CLionProjects/Lecture07/floodFill.cpp

CMakeFiles/account.dir/floodFill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/floodFill.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/floodFill.cpp > CMakeFiles/account.dir/floodFill.cpp.i

CMakeFiles/account.dir/floodFill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/floodFill.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/floodFill.cpp -o CMakeFiles/account.dir/floodFill.cpp.s

CMakeFiles/account.dir/floodFill.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/floodFill.cpp.o.requires

CMakeFiles/account.dir/floodFill.cpp.o.provides: CMakeFiles/account.dir/floodFill.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/floodFill.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/floodFill.cpp.o.provides

CMakeFiles/account.dir/floodFill.cpp.o.provides.build: CMakeFiles/account.dir/floodFill.cpp.o


CMakeFiles/account.dir/hw5a.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/hw5a.cpp.o: ../hw5a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/account.dir/hw5a.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/hw5a.cpp.o -c /home/mosch/CLionProjects/Lecture07/hw5a.cpp

CMakeFiles/account.dir/hw5a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/hw5a.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/hw5a.cpp > CMakeFiles/account.dir/hw5a.cpp.i

CMakeFiles/account.dir/hw5a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/hw5a.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/hw5a.cpp -o CMakeFiles/account.dir/hw5a.cpp.s

CMakeFiles/account.dir/hw5a.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/hw5a.cpp.o.requires

CMakeFiles/account.dir/hw5a.cpp.o.provides: CMakeFiles/account.dir/hw5a.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/hw5a.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/hw5a.cpp.o.provides

CMakeFiles/account.dir/hw5a.cpp.o.provides.build: CMakeFiles/account.dir/hw5a.cpp.o


CMakeFiles/account.dir/hw7?.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/hw7?.cpp.o: ../hw7?.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/account.dir/hw7?.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/hw7?.cpp.o -c /home/mosch/CLionProjects/Lecture07/hw7?.cpp

CMakeFiles/account.dir/hw7?.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/hw7?.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/hw7?.cpp > CMakeFiles/account.dir/hw7?.cpp.i

CMakeFiles/account.dir/hw7?.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/hw7?.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/hw7?.cpp -o CMakeFiles/account.dir/hw7?.cpp.s

CMakeFiles/account.dir/hw7?.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/hw7?.cpp.o.requires

CMakeFiles/account.dir/hw7?.cpp.o.provides: CMakeFiles/account.dir/hw7?.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/hw7?.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/hw7?.cpp.o.provides

CMakeFiles/account.dir/hw7?.cpp.o.provides.build: CMakeFiles/account.dir/hw7?.cpp.o


CMakeFiles/account.dir/practice1.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/practice1.cpp.o: ../practice1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/account.dir/practice1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/practice1.cpp.o -c /home/mosch/CLionProjects/Lecture07/practice1.cpp

CMakeFiles/account.dir/practice1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/practice1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/practice1.cpp > CMakeFiles/account.dir/practice1.cpp.i

CMakeFiles/account.dir/practice1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/practice1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/practice1.cpp -o CMakeFiles/account.dir/practice1.cpp.s

CMakeFiles/account.dir/practice1.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/practice1.cpp.o.requires

CMakeFiles/account.dir/practice1.cpp.o.provides: CMakeFiles/account.dir/practice1.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/practice1.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/practice1.cpp.o.provides

CMakeFiles/account.dir/practice1.cpp.o.provides.build: CMakeFiles/account.dir/practice1.cpp.o


CMakeFiles/account.dir/practice2.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/practice2.cpp.o: ../practice2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/account.dir/practice2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/practice2.cpp.o -c /home/mosch/CLionProjects/Lecture07/practice2.cpp

CMakeFiles/account.dir/practice2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/practice2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mosch/CLionProjects/Lecture07/practice2.cpp > CMakeFiles/account.dir/practice2.cpp.i

CMakeFiles/account.dir/practice2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/practice2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mosch/CLionProjects/Lecture07/practice2.cpp -o CMakeFiles/account.dir/practice2.cpp.s

CMakeFiles/account.dir/practice2.cpp.o.requires:

.PHONY : CMakeFiles/account.dir/practice2.cpp.o.requires

CMakeFiles/account.dir/practice2.cpp.o.provides: CMakeFiles/account.dir/practice2.cpp.o.requires
	$(MAKE) -f CMakeFiles/account.dir/build.make CMakeFiles/account.dir/practice2.cpp.o.provides.build
.PHONY : CMakeFiles/account.dir/practice2.cpp.o.provides

CMakeFiles/account.dir/practice2.cpp.o.provides.build: CMakeFiles/account.dir/practice2.cpp.o


# Object files for target account
account_OBJECTS = \
"CMakeFiles/account.dir/main.cpp.o" \
"CMakeFiles/account.dir/Account.cpp.o" \
"CMakeFiles/account.dir/floodFill.cpp.o" \
"CMakeFiles/account.dir/hw5a.cpp.o" \
"CMakeFiles/account.dir/hw7?.cpp.o" \
"CMakeFiles/account.dir/practice1.cpp.o" \
"CMakeFiles/account.dir/practice2.cpp.o"

# External object files for target account
account_EXTERNAL_OBJECTS =

account: CMakeFiles/account.dir/main.cpp.o
account: CMakeFiles/account.dir/Account.cpp.o
account: CMakeFiles/account.dir/floodFill.cpp.o
account: CMakeFiles/account.dir/hw5a.cpp.o
account: CMakeFiles/account.dir/hw7?.cpp.o
account: CMakeFiles/account.dir/practice1.cpp.o
account: CMakeFiles/account.dir/practice2.cpp.o
account: CMakeFiles/account.dir/build.make
account: CMakeFiles/account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable account"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/account.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/account.dir/build: account

.PHONY : CMakeFiles/account.dir/build

CMakeFiles/account.dir/requires: CMakeFiles/account.dir/main.cpp.o.requires
CMakeFiles/account.dir/requires: CMakeFiles/account.dir/Account.cpp.o.requires
CMakeFiles/account.dir/requires: CMakeFiles/account.dir/floodFill.cpp.o.requires
CMakeFiles/account.dir/requires: CMakeFiles/account.dir/hw5a.cpp.o.requires
CMakeFiles/account.dir/requires: CMakeFiles/account.dir/hw7?.cpp.o.requires
CMakeFiles/account.dir/requires: CMakeFiles/account.dir/practice1.cpp.o.requires
CMakeFiles/account.dir/requires: CMakeFiles/account.dir/practice2.cpp.o.requires

.PHONY : CMakeFiles/account.dir/requires

CMakeFiles/account.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/account.dir/cmake_clean.cmake
.PHONY : CMakeFiles/account.dir/clean

CMakeFiles/account.dir/depend:
	cd /home/mosch/CLionProjects/Lecture07/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mosch/CLionProjects/Lecture07 /home/mosch/CLionProjects/Lecture07 /home/mosch/CLionProjects/Lecture07/cmake-build-debug /home/mosch/CLionProjects/Lecture07/cmake-build-debug /home/mosch/CLionProjects/Lecture07/cmake-build-debug/CMakeFiles/account.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/account.dir/depend
