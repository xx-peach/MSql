# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\think\minisql_proj\new\MSql

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\think\minisql_proj\new\MSql\build

# Include any dependencies generated for this target.
include record/CMakeFiles/record.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include record/CMakeFiles/record.dir/compiler_depend.make

# Include the progress variables for this target.
include record/CMakeFiles/record.dir/progress.make

# Include the compile flags for this target's objects.
include record/CMakeFiles/record.dir/flags.make

record/CMakeFiles/record.dir/recordManager.cpp.obj: record/CMakeFiles/record.dir/flags.make
record/CMakeFiles/record.dir/recordManager.cpp.obj: record/CMakeFiles/record.dir/includes_CXX.rsp
record/CMakeFiles/record.dir/recordManager.cpp.obj: ../record/recordManager.cpp
record/CMakeFiles/record.dir/recordManager.cpp.obj: record/CMakeFiles/record.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\think\minisql_proj\new\MSql\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object record/CMakeFiles/record.dir/recordManager.cpp.obj"
	cd /d C:\Users\think\minisql_proj\new\MSql\build\record && D:\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT record/CMakeFiles/record.dir/recordManager.cpp.obj -MF CMakeFiles\record.dir\recordManager.cpp.obj.d -o CMakeFiles\record.dir\recordManager.cpp.obj -c C:\Users\think\minisql_proj\new\MSql\record\recordManager.cpp

record/CMakeFiles/record.dir/recordManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/record.dir/recordManager.cpp.i"
	cd /d C:\Users\think\minisql_proj\new\MSql\build\record && D:\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\think\minisql_proj\new\MSql\record\recordManager.cpp > CMakeFiles\record.dir\recordManager.cpp.i

record/CMakeFiles/record.dir/recordManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/record.dir/recordManager.cpp.s"
	cd /d C:\Users\think\minisql_proj\new\MSql\build\record && D:\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\think\minisql_proj\new\MSql\record\recordManager.cpp -o CMakeFiles\record.dir\recordManager.cpp.s

# Object files for target record
record_OBJECTS = \
"CMakeFiles/record.dir/recordManager.cpp.obj"

# External object files for target record
record_EXTERNAL_OBJECTS =

record/librecord.a: record/CMakeFiles/record.dir/recordManager.cpp.obj
record/librecord.a: record/CMakeFiles/record.dir/build.make
record/librecord.a: record/CMakeFiles/record.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\think\minisql_proj\new\MSql\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library librecord.a"
	cd /d C:\Users\think\minisql_proj\new\MSql\build\record && $(CMAKE_COMMAND) -P CMakeFiles\record.dir\cmake_clean_target.cmake
	cd /d C:\Users\think\minisql_proj\new\MSql\build\record && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\record.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
record/CMakeFiles/record.dir/build: record/librecord.a
.PHONY : record/CMakeFiles/record.dir/build

record/CMakeFiles/record.dir/clean:
	cd /d C:\Users\think\minisql_proj\new\MSql\build\record && $(CMAKE_COMMAND) -P CMakeFiles\record.dir\cmake_clean.cmake
.PHONY : record/CMakeFiles/record.dir/clean

record/CMakeFiles/record.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\think\minisql_proj\new\MSql C:\Users\think\minisql_proj\new\MSql\record C:\Users\think\minisql_proj\new\MSql\build C:\Users\think\minisql_proj\new\MSql\build\record C:\Users\think\minisql_proj\new\MSql\build\record\CMakeFiles\record.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : record/CMakeFiles/record.dir/depend

