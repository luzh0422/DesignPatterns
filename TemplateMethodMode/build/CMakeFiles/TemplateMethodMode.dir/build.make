# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build

# Include any dependencies generated for this target.
include CMakeFiles/TemplateMethodMode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TemplateMethodMode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TemplateMethodMode.dir/flags.make

CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.o: CMakeFiles/TemplateMethodMode.dir/flags.make
CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.o: ../AbstractDisplay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/AbstractDisplay.cpp

CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/AbstractDisplay.cpp > CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.i

CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/AbstractDisplay.cpp -o CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.s

CMakeFiles/TemplateMethodMode.dir/main.cpp.o: CMakeFiles/TemplateMethodMode.dir/flags.make
CMakeFiles/TemplateMethodMode.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TemplateMethodMode.dir/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemplateMethodMode.dir/main.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/main.cpp

CMakeFiles/TemplateMethodMode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemplateMethodMode.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/main.cpp > CMakeFiles/TemplateMethodMode.dir/main.cpp.i

CMakeFiles/TemplateMethodMode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemplateMethodMode.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/main.cpp -o CMakeFiles/TemplateMethodMode.dir/main.cpp.s

CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.o: CMakeFiles/TemplateMethodMode.dir/flags.make
CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.o: ../CharDisplay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/CharDisplay.cpp

CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/CharDisplay.cpp > CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.i

CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/CharDisplay.cpp -o CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.s

CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.o: CMakeFiles/TemplateMethodMode.dir/flags.make
CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.o: ../StringDisplay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/StringDisplay.cpp

CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/StringDisplay.cpp > CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.i

CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/StringDisplay.cpp -o CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.s

# Object files for target TemplateMethodMode
TemplateMethodMode_OBJECTS = \
"CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.o" \
"CMakeFiles/TemplateMethodMode.dir/main.cpp.o" \
"CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.o" \
"CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.o"

# External object files for target TemplateMethodMode
TemplateMethodMode_EXTERNAL_OBJECTS =

TemplateMethodMode: CMakeFiles/TemplateMethodMode.dir/AbstractDisplay.cpp.o
TemplateMethodMode: CMakeFiles/TemplateMethodMode.dir/main.cpp.o
TemplateMethodMode: CMakeFiles/TemplateMethodMode.dir/CharDisplay.cpp.o
TemplateMethodMode: CMakeFiles/TemplateMethodMode.dir/StringDisplay.cpp.o
TemplateMethodMode: CMakeFiles/TemplateMethodMode.dir/build.make
TemplateMethodMode: CMakeFiles/TemplateMethodMode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable TemplateMethodMode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TemplateMethodMode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TemplateMethodMode.dir/build: TemplateMethodMode

.PHONY : CMakeFiles/TemplateMethodMode.dir/build

CMakeFiles/TemplateMethodMode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TemplateMethodMode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TemplateMethodMode.dir/clean

CMakeFiles/TemplateMethodMode.dir/depend:
	cd /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build /Users/luzh/nodeAddon/DesignPatterns/TemplateMethodMode/build/CMakeFiles/TemplateMethodMode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TemplateMethodMode.dir/depend

