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
CMAKE_SOURCE_DIR = /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build

# Include any dependencies generated for this target.
include record/CMakeFiles/record.dir/depend.make

# Include the progress variables for this target.
include record/CMakeFiles/record.dir/progress.make

# Include the compile flags for this target's objects.
include record/CMakeFiles/record.dir/flags.make

record/CMakeFiles/record.dir/recordManager.cpp.o: record/CMakeFiles/record.dir/flags.make
record/CMakeFiles/record.dir/recordManager.cpp.o: ../record/recordManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object record/CMakeFiles/record.dir/recordManager.cpp.o"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/record.dir/recordManager.cpp.o -c /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/record/recordManager.cpp

record/CMakeFiles/record.dir/recordManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/record.dir/recordManager.cpp.i"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/record/recordManager.cpp > CMakeFiles/record.dir/recordManager.cpp.i

record/CMakeFiles/record.dir/recordManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/record.dir/recordManager.cpp.s"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/record/recordManager.cpp -o CMakeFiles/record.dir/recordManager.cpp.s

# Object files for target record
record_OBJECTS = \
"CMakeFiles/record.dir/recordManager.cpp.o"

# External object files for target record
record_EXTERNAL_OBJECTS =

record/librecord.a: record/CMakeFiles/record.dir/recordManager.cpp.o
record/librecord.a: record/CMakeFiles/record.dir/build.make
record/librecord.a: record/CMakeFiles/record.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library librecord.a"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record && $(CMAKE_COMMAND) -P CMakeFiles/record.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/record.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
record/CMakeFiles/record.dir/build: record/librecord.a

.PHONY : record/CMakeFiles/record.dir/build

record/CMakeFiles/record.dir/clean:
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record && $(CMAKE_COMMAND) -P CMakeFiles/record.dir/cmake_clean.cmake
.PHONY : record/CMakeFiles/record.dir/clean

record/CMakeFiles/record.dir/depend:
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/record /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record /mnt/c/Users/think/minisql_proj/new/MSql-ir/Msql/build/record/CMakeFiles/record.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : record/CMakeFiles/record.dir/depend

