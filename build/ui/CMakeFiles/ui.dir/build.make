# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build

# Include any dependencies generated for this target.
include ui/CMakeFiles/ui.dir/depend.make

# Include the progress variables for this target.
include ui/CMakeFiles/ui.dir/progress.make

# Include the compile flags for this target's objects.
include ui/CMakeFiles/ui.dir/flags.make

ui/CMakeFiles/ui.dir/ui.cpp.o: ui/CMakeFiles/ui.dir/flags.make
ui/CMakeFiles/ui.dir/ui.cpp.o: ../ui/ui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ui/CMakeFiles/ui.dir/ui.cpp.o"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ui.dir/ui.cpp.o -c /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/ui/ui.cpp

ui/CMakeFiles/ui.dir/ui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ui.dir/ui.cpp.i"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/ui/ui.cpp > CMakeFiles/ui.dir/ui.cpp.i

ui/CMakeFiles/ui.dir/ui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ui.dir/ui.cpp.s"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/ui/ui.cpp -o CMakeFiles/ui.dir/ui.cpp.s

# Object files for target ui
ui_OBJECTS = \
"CMakeFiles/ui.dir/ui.cpp.o"

# External object files for target ui
ui_EXTERNAL_OBJECTS =

ui/libui.a: ui/CMakeFiles/ui.dir/ui.cpp.o
ui/libui.a: ui/CMakeFiles/ui.dir/build.make
ui/libui.a: ui/CMakeFiles/ui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libui.a"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui && $(CMAKE_COMMAND) -P CMakeFiles/ui.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ui/CMakeFiles/ui.dir/build: ui/libui.a

.PHONY : ui/CMakeFiles/ui.dir/build

ui/CMakeFiles/ui.dir/clean:
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui && $(CMAKE_COMMAND) -P CMakeFiles/ui.dir/cmake_clean.cmake
.PHONY : ui/CMakeFiles/ui.dir/clean

ui/CMakeFiles/ui.dir/depend:
	cd /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/ui /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui /mnt/c/Users/think/minisql_proj/new/MSql-index/MSql/build/ui/CMakeFiles/ui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ui/CMakeFiles/ui.dir/depend

