# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.22.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.22.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/enzhizhou/Desktop/Activities/C++/LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/enzhizhou/Desktop/Activities/C++/LeetCode/build

# Include any dependencies generated for this target.
include CMakeFiles/LeetCode.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LeetCode.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LeetCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LeetCode.dir/flags.make

CMakeFiles/LeetCode.dir/main.cpp.o: CMakeFiles/LeetCode.dir/flags.make
CMakeFiles/LeetCode.dir/main.cpp.o: ../main.cpp
CMakeFiles/LeetCode.dir/main.cpp.o: CMakeFiles/LeetCode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/enzhizhou/Desktop/Activities/C++/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LeetCode.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LeetCode.dir/main.cpp.o -MF CMakeFiles/LeetCode.dir/main.cpp.o.d -o CMakeFiles/LeetCode.dir/main.cpp.o -c /Users/enzhizhou/Desktop/Activities/C++/LeetCode/main.cpp

CMakeFiles/LeetCode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeetCode.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/enzhizhou/Desktop/Activities/C++/LeetCode/main.cpp > CMakeFiles/LeetCode.dir/main.cpp.i

CMakeFiles/LeetCode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeetCode.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/enzhizhou/Desktop/Activities/C++/LeetCode/main.cpp -o CMakeFiles/LeetCode.dir/main.cpp.s

CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o: CMakeFiles/LeetCode.dir/flags.make
CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o: ../src/Solution_countBits.cpp
CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o: CMakeFiles/LeetCode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/enzhizhou/Desktop/Activities/C++/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o -MF CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o.d -o CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o -c /Users/enzhizhou/Desktop/Activities/C++/LeetCode/src/Solution_countBits.cpp

CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/enzhizhou/Desktop/Activities/C++/LeetCode/src/Solution_countBits.cpp > CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.i

CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/enzhizhou/Desktop/Activities/C++/LeetCode/src/Solution_countBits.cpp -o CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.s

CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o: CMakeFiles/LeetCode.dir/flags.make
CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o: ../src/Solution_findMedianSortedArrays.cpp
CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o: CMakeFiles/LeetCode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/enzhizhou/Desktop/Activities/C++/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o -MF CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o.d -o CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o -c /Users/enzhizhou/Desktop/Activities/C++/LeetCode/src/Solution_findMedianSortedArrays.cpp

CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/enzhizhou/Desktop/Activities/C++/LeetCode/src/Solution_findMedianSortedArrays.cpp > CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.i

CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/enzhizhou/Desktop/Activities/C++/LeetCode/src/Solution_findMedianSortedArrays.cpp -o CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.s

# Object files for target LeetCode
LeetCode_OBJECTS = \
"CMakeFiles/LeetCode.dir/main.cpp.o" \
"CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o" \
"CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o"

# External object files for target LeetCode
LeetCode_EXTERNAL_OBJECTS =

LeetCode: CMakeFiles/LeetCode.dir/main.cpp.o
LeetCode: CMakeFiles/LeetCode.dir/src/Solution_countBits.cpp.o
LeetCode: CMakeFiles/LeetCode.dir/src/Solution_findMedianSortedArrays.cpp.o
LeetCode: CMakeFiles/LeetCode.dir/build.make
LeetCode: CMakeFiles/LeetCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/enzhizhou/Desktop/Activities/C++/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable LeetCode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LeetCode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LeetCode.dir/build: LeetCode
.PHONY : CMakeFiles/LeetCode.dir/build

CMakeFiles/LeetCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LeetCode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LeetCode.dir/clean

CMakeFiles/LeetCode.dir/depend:
	cd /Users/enzhizhou/Desktop/Activities/C++/LeetCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/enzhizhou/Desktop/Activities/C++/LeetCode /Users/enzhizhou/Desktop/Activities/C++/LeetCode /Users/enzhizhou/Desktop/Activities/C++/LeetCode/build /Users/enzhizhou/Desktop/Activities/C++/LeetCode/build /Users/enzhizhou/Desktop/Activities/C++/LeetCode/build/CMakeFiles/LeetCode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LeetCode.dir/depend
