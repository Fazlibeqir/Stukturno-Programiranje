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
CMAKE_COMMAND = "F:\CLION\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\CLION\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Cushtime\Najgolem_Zbir_na_deliteli

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Cushtime\Najgolem_Zbir_na_deliteli\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Najgolem_Zbir_na_deliteli.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Najgolem_Zbir_na_deliteli.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Najgolem_Zbir_na_deliteli.dir/flags.make

CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.obj: CMakeFiles/Najgolem_Zbir_na_deliteli.dir/flags.make
CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cushtime\Najgolem_Zbir_na_deliteli\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.obj"
	F:\winbuilds\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Najgolem_Zbir_na_deliteli.dir\main.c.obj -c F:\Cushtime\Najgolem_Zbir_na_deliteli\main.c

CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.i"
	F:\winbuilds\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cushtime\Najgolem_Zbir_na_deliteli\main.c > CMakeFiles\Najgolem_Zbir_na_deliteli.dir\main.c.i

CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.s"
	F:\winbuilds\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cushtime\Najgolem_Zbir_na_deliteli\main.c -o CMakeFiles\Najgolem_Zbir_na_deliteli.dir\main.c.s

# Object files for target Najgolem_Zbir_na_deliteli
Najgolem_Zbir_na_deliteli_OBJECTS = \
"CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.obj"

# External object files for target Najgolem_Zbir_na_deliteli
Najgolem_Zbir_na_deliteli_EXTERNAL_OBJECTS =

Najgolem_Zbir_na_deliteli.exe: CMakeFiles/Najgolem_Zbir_na_deliteli.dir/main.c.obj
Najgolem_Zbir_na_deliteli.exe: CMakeFiles/Najgolem_Zbir_na_deliteli.dir/build.make
Najgolem_Zbir_na_deliteli.exe: CMakeFiles/Najgolem_Zbir_na_deliteli.dir/linklibs.rsp
Najgolem_Zbir_na_deliteli.exe: CMakeFiles/Najgolem_Zbir_na_deliteli.dir/objects1.rsp
Najgolem_Zbir_na_deliteli.exe: CMakeFiles/Najgolem_Zbir_na_deliteli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cushtime\Najgolem_Zbir_na_deliteli\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Najgolem_Zbir_na_deliteli.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Najgolem_Zbir_na_deliteli.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Najgolem_Zbir_na_deliteli.dir/build: Najgolem_Zbir_na_deliteli.exe
.PHONY : CMakeFiles/Najgolem_Zbir_na_deliteli.dir/build

CMakeFiles/Najgolem_Zbir_na_deliteli.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Najgolem_Zbir_na_deliteli.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Najgolem_Zbir_na_deliteli.dir/clean

CMakeFiles/Najgolem_Zbir_na_deliteli.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cushtime\Najgolem_Zbir_na_deliteli F:\Cushtime\Najgolem_Zbir_na_deliteli F:\Cushtime\Najgolem_Zbir_na_deliteli\cmake-build-debug F:\Cushtime\Najgolem_Zbir_na_deliteli\cmake-build-debug F:\Cushtime\Najgolem_Zbir_na_deliteli\cmake-build-debug\CMakeFiles\Najgolem_Zbir_na_deliteli.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Najgolem_Zbir_na_deliteli.dir/depend

