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
CMAKE_SOURCE_DIR = /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build

# Include any dependencies generated for this target.
include interpreter/CMakeFiles/interpreter.dir/depend.make

# Include the progress variables for this target.
include interpreter/CMakeFiles/interpreter.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/CMakeFiles/interpreter.dir/flags.make

interpreter/CMakeFiles/interpreter.dir/interpreter.cpp.o: interpreter/CMakeFiles/interpreter.dir/flags.make
interpreter/CMakeFiles/interpreter.dir/interpreter.cpp.o: ../interpreter/interpreter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/CMakeFiles/interpreter.dir/interpreter.cpp.o"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/interpreter.dir/interpreter.cpp.o -c /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/interpreter/interpreter.cpp

interpreter/CMakeFiles/interpreter.dir/interpreter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interpreter.dir/interpreter.cpp.i"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/interpreter/interpreter.cpp > CMakeFiles/interpreter.dir/interpreter.cpp.i

interpreter/CMakeFiles/interpreter.dir/interpreter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interpreter.dir/interpreter.cpp.s"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/interpreter/interpreter.cpp -o CMakeFiles/interpreter.dir/interpreter.cpp.s

# Object files for target interpreter
interpreter_OBJECTS = \
"CMakeFiles/interpreter.dir/interpreter.cpp.o"

# External object files for target interpreter
interpreter_EXTERNAL_OBJECTS =

interpreter/libinterpreter.a: interpreter/CMakeFiles/interpreter.dir/interpreter.cpp.o
interpreter/libinterpreter.a: interpreter/CMakeFiles/interpreter.dir/build.make
interpreter/libinterpreter.a: interpreter/CMakeFiles/interpreter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libinterpreter.a"
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter && $(CMAKE_COMMAND) -P CMakeFiles/interpreter.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/interpreter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/CMakeFiles/interpreter.dir/build: interpreter/libinterpreter.a

.PHONY : interpreter/CMakeFiles/interpreter.dir/build

interpreter/CMakeFiles/interpreter.dir/clean:
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter && $(CMAKE_COMMAND) -P CMakeFiles/interpreter.dir/cmake_clean.cmake
.PHONY : interpreter/CMakeFiles/interpreter.dir/clean

interpreter/CMakeFiles/interpreter.dir/depend:
	cd /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/interpreter /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter /mnt/c/Users/think/minisql_proj/new/MSql-ok/MSql/build/interpreter/CMakeFiles/interpreter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/CMakeFiles/interpreter.dir/depend
