# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andre/breeze-edit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andre/breeze-edit/build

# Utility rule file for kcm_breezedecoration_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/progress.make

kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/codegen:
.PHONY : kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/codegen

kcm_breezedecoration_autogen_timestamp_deps: kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/build.make
.PHONY : kcm_breezedecoration_autogen_timestamp_deps

# Rule to build all files generated by this target.
kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/build: kcm_breezedecoration_autogen_timestamp_deps
.PHONY : kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/build

kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/clean:
	cd /home/andre/breeze-edit/build/kdecoration/config && $(CMAKE_COMMAND) -P CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/clean

kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/depend:
	cd /home/andre/breeze-edit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andre/breeze-edit /home/andre/breeze-edit/kdecoration/config /home/andre/breeze-edit/build /home/andre/breeze-edit/build/kdecoration/config /home/andre/breeze-edit/build/kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : kdecoration/config/CMakeFiles/kcm_breezedecoration_autogen_timestamp_deps.dir/depend

