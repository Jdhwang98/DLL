# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/john/CLionProjects/DoubleLinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DoubleLinkedList.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DoubleLinkedList.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DoubleLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DoubleLinkedList.dir/flags.make

CMakeFiles/DoubleLinkedList.dir/main.cpp.o: CMakeFiles/DoubleLinkedList.dir/flags.make
CMakeFiles/DoubleLinkedList.dir/main.cpp.o: ../main.cpp
CMakeFiles/DoubleLinkedList.dir/main.cpp.o: CMakeFiles/DoubleLinkedList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DoubleLinkedList.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DoubleLinkedList.dir/main.cpp.o -MF CMakeFiles/DoubleLinkedList.dir/main.cpp.o.d -o CMakeFiles/DoubleLinkedList.dir/main.cpp.o -c /Users/john/CLionProjects/DoubleLinkedList/main.cpp

CMakeFiles/DoubleLinkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DoubleLinkedList.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/john/CLionProjects/DoubleLinkedList/main.cpp > CMakeFiles/DoubleLinkedList.dir/main.cpp.i

CMakeFiles/DoubleLinkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DoubleLinkedList.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/john/CLionProjects/DoubleLinkedList/main.cpp -o CMakeFiles/DoubleLinkedList.dir/main.cpp.s

CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o: CMakeFiles/DoubleLinkedList.dir/flags.make
CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o: ../DLL.cpp
CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o: CMakeFiles/DoubleLinkedList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o -MF CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o.d -o CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o -c /Users/john/CLionProjects/DoubleLinkedList/DLL.cpp

CMakeFiles/DoubleLinkedList.dir/DLL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DoubleLinkedList.dir/DLL.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/john/CLionProjects/DoubleLinkedList/DLL.cpp > CMakeFiles/DoubleLinkedList.dir/DLL.cpp.i

CMakeFiles/DoubleLinkedList.dir/DLL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DoubleLinkedList.dir/DLL.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/john/CLionProjects/DoubleLinkedList/DLL.cpp -o CMakeFiles/DoubleLinkedList.dir/DLL.cpp.s

# Object files for target DoubleLinkedList
DoubleLinkedList_OBJECTS = \
"CMakeFiles/DoubleLinkedList.dir/main.cpp.o" \
"CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o"

# External object files for target DoubleLinkedList
DoubleLinkedList_EXTERNAL_OBJECTS =

DoubleLinkedList: CMakeFiles/DoubleLinkedList.dir/main.cpp.o
DoubleLinkedList: CMakeFiles/DoubleLinkedList.dir/DLL.cpp.o
DoubleLinkedList: CMakeFiles/DoubleLinkedList.dir/build.make
DoubleLinkedList: CMakeFiles/DoubleLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable DoubleLinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DoubleLinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DoubleLinkedList.dir/build: DoubleLinkedList
.PHONY : CMakeFiles/DoubleLinkedList.dir/build

CMakeFiles/DoubleLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DoubleLinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DoubleLinkedList.dir/clean

CMakeFiles/DoubleLinkedList.dir/depend:
	cd /Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/john/CLionProjects/DoubleLinkedList /Users/john/CLionProjects/DoubleLinkedList /Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug /Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug /Users/john/CLionProjects/DoubleLinkedList/cmake-build-debug/CMakeFiles/DoubleLinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DoubleLinkedList.dir/depend
