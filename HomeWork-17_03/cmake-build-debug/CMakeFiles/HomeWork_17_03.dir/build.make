# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projects\C++\HomeWork-17_03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\C++\HomeWork-17_03\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HomeWork_17_03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HomeWork_17_03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HomeWork_17_03.dir/flags.make

CMakeFiles/HomeWork_17_03.dir/main.cpp.obj: CMakeFiles/HomeWork_17_03.dir/flags.make
CMakeFiles/HomeWork_17_03.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Projects\C++\HomeWork-17_03\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HomeWork_17_03.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HomeWork_17_03.dir\main.cpp.obj -c C:\Projects\C++\HomeWork-17_03\main.cpp

CMakeFiles/HomeWork_17_03.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeWork_17_03.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Projects\C++\HomeWork-17_03\main.cpp > CMakeFiles\HomeWork_17_03.dir\main.cpp.i

CMakeFiles/HomeWork_17_03.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeWork_17_03.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Projects\C++\HomeWork-17_03\main.cpp -o CMakeFiles\HomeWork_17_03.dir\main.cpp.s

# Object files for target HomeWork_17_03
HomeWork_17_03_OBJECTS = \
"CMakeFiles/HomeWork_17_03.dir/main.cpp.obj"

# External object files for target HomeWork_17_03
HomeWork_17_03_EXTERNAL_OBJECTS =

HomeWork_17_03.exe: CMakeFiles/HomeWork_17_03.dir/main.cpp.obj
HomeWork_17_03.exe: CMakeFiles/HomeWork_17_03.dir/build.make
HomeWork_17_03.exe: CMakeFiles/HomeWork_17_03.dir/linklibs.rsp
HomeWork_17_03.exe: CMakeFiles/HomeWork_17_03.dir/objects1.rsp
HomeWork_17_03.exe: CMakeFiles/HomeWork_17_03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Projects\C++\HomeWork-17_03\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HomeWork_17_03.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HomeWork_17_03.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HomeWork_17_03.dir/build: HomeWork_17_03.exe

.PHONY : CMakeFiles/HomeWork_17_03.dir/build

CMakeFiles/HomeWork_17_03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HomeWork_17_03.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HomeWork_17_03.dir/clean

CMakeFiles/HomeWork_17_03.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\C++\HomeWork-17_03 C:\Projects\C++\HomeWork-17_03 C:\Projects\C++\HomeWork-17_03\cmake-build-debug C:\Projects\C++\HomeWork-17_03\cmake-build-debug C:\Projects\C++\HomeWork-17_03\cmake-build-debug\CMakeFiles\HomeWork_17_03.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HomeWork_17_03.dir/depend

