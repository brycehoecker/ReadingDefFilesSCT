# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /home/psctdev/vscode_folder/ReadingDefFilesSCT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/psctdev/vscode_folder/ReadingDefFilesSCT/build

# Include any dependencies generated for this target.
include CMakeFiles/ReadingDefFilesSCTTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ReadingDefFilesSCTTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ReadingDefFilesSCTTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReadingDefFilesSCTTest.dir/flags.make

CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o: CMakeFiles/ReadingDefFilesSCTTest.dir/flags.make
CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o: ../main.cpp
CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o: CMakeFiles/ReadingDefFilesSCTTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/psctdev/vscode_folder/ReadingDefFilesSCT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o -MF CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o.d -o CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o -c /home/psctdev/vscode_folder/ReadingDefFilesSCT/main.cpp

CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/psctdev/vscode_folder/ReadingDefFilesSCT/main.cpp > CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.i

CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/psctdev/vscode_folder/ReadingDefFilesSCT/main.cpp -o CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.s

CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o: CMakeFiles/ReadingDefFilesSCTTest.dir/flags.make
CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o: ../ReadingDefFilesSCT.cpp
CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o: CMakeFiles/ReadingDefFilesSCTTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/psctdev/vscode_folder/ReadingDefFilesSCT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o -MF CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o.d -o CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o -c /home/psctdev/vscode_folder/ReadingDefFilesSCT/ReadingDefFilesSCT.cpp

CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/psctdev/vscode_folder/ReadingDefFilesSCT/ReadingDefFilesSCT.cpp > CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.i

CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/psctdev/vscode_folder/ReadingDefFilesSCT/ReadingDefFilesSCT.cpp -o CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.s

# Object files for target ReadingDefFilesSCTTest
ReadingDefFilesSCTTest_OBJECTS = \
"CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o" \
"CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o"

# External object files for target ReadingDefFilesSCTTest
ReadingDefFilesSCTTest_EXTERNAL_OBJECTS =

ReadingDefFilesSCTTest: CMakeFiles/ReadingDefFilesSCTTest.dir/main.cpp.o
ReadingDefFilesSCTTest: CMakeFiles/ReadingDefFilesSCTTest.dir/ReadingDefFilesSCT.cpp.o
ReadingDefFilesSCTTest: CMakeFiles/ReadingDefFilesSCTTest.dir/build.make
ReadingDefFilesSCTTest: CMakeFiles/ReadingDefFilesSCTTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/psctdev/vscode_folder/ReadingDefFilesSCT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ReadingDefFilesSCTTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ReadingDefFilesSCTTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReadingDefFilesSCTTest.dir/build: ReadingDefFilesSCTTest
.PHONY : CMakeFiles/ReadingDefFilesSCTTest.dir/build

CMakeFiles/ReadingDefFilesSCTTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ReadingDefFilesSCTTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ReadingDefFilesSCTTest.dir/clean

CMakeFiles/ReadingDefFilesSCTTest.dir/depend:
	cd /home/psctdev/vscode_folder/ReadingDefFilesSCT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/psctdev/vscode_folder/ReadingDefFilesSCT /home/psctdev/vscode_folder/ReadingDefFilesSCT /home/psctdev/vscode_folder/ReadingDefFilesSCT/build /home/psctdev/vscode_folder/ReadingDefFilesSCT/build /home/psctdev/vscode_folder/ReadingDefFilesSCT/build/CMakeFiles/ReadingDefFilesSCTTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReadingDefFilesSCTTest.dir/depend

