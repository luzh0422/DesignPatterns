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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/luzh/nodeAddon/DesignPatterns/IteratorMode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/IteratorMode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/IteratorMode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IteratorMode.dir/flags.make

CMakeFiles/IteratorMode.dir/main.cpp.o: CMakeFiles/IteratorMode.dir/flags.make
CMakeFiles/IteratorMode.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IteratorMode.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IteratorMode.dir/main.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/main.cpp

CMakeFiles/IteratorMode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IteratorMode.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/main.cpp > CMakeFiles/IteratorMode.dir/main.cpp.i

CMakeFiles/IteratorMode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IteratorMode.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/main.cpp -o CMakeFiles/IteratorMode.dir/main.cpp.s

CMakeFiles/IteratorMode.dir/BookShelf.cpp.o: CMakeFiles/IteratorMode.dir/flags.make
CMakeFiles/IteratorMode.dir/BookShelf.cpp.o: ../BookShelf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/IteratorMode.dir/BookShelf.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IteratorMode.dir/BookShelf.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/BookShelf.cpp

CMakeFiles/IteratorMode.dir/BookShelf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IteratorMode.dir/BookShelf.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/BookShelf.cpp > CMakeFiles/IteratorMode.dir/BookShelf.cpp.i

CMakeFiles/IteratorMode.dir/BookShelf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IteratorMode.dir/BookShelf.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/BookShelf.cpp -o CMakeFiles/IteratorMode.dir/BookShelf.cpp.s

CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.o: CMakeFiles/IteratorMode.dir/flags.make
CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.o: ../BookShelfIterator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/BookShelfIterator.cpp

CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/BookShelfIterator.cpp > CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.i

CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/BookShelfIterator.cpp -o CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.s

CMakeFiles/IteratorMode.dir/Book.cpp.o: CMakeFiles/IteratorMode.dir/flags.make
CMakeFiles/IteratorMode.dir/Book.cpp.o: ../Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/IteratorMode.dir/Book.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IteratorMode.dir/Book.cpp.o -c /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/Book.cpp

CMakeFiles/IteratorMode.dir/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IteratorMode.dir/Book.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/Book.cpp > CMakeFiles/IteratorMode.dir/Book.cpp.i

CMakeFiles/IteratorMode.dir/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IteratorMode.dir/Book.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/Book.cpp -o CMakeFiles/IteratorMode.dir/Book.cpp.s

# Object files for target IteratorMode
IteratorMode_OBJECTS = \
"CMakeFiles/IteratorMode.dir/main.cpp.o" \
"CMakeFiles/IteratorMode.dir/BookShelf.cpp.o" \
"CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.o" \
"CMakeFiles/IteratorMode.dir/Book.cpp.o"

# External object files for target IteratorMode
IteratorMode_EXTERNAL_OBJECTS =

IteratorMode: CMakeFiles/IteratorMode.dir/main.cpp.o
IteratorMode: CMakeFiles/IteratorMode.dir/BookShelf.cpp.o
IteratorMode: CMakeFiles/IteratorMode.dir/BookShelfIterator.cpp.o
IteratorMode: CMakeFiles/IteratorMode.dir/Book.cpp.o
IteratorMode: CMakeFiles/IteratorMode.dir/build.make
IteratorMode: CMakeFiles/IteratorMode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable IteratorMode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IteratorMode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IteratorMode.dir/build: IteratorMode

.PHONY : CMakeFiles/IteratorMode.dir/build

CMakeFiles/IteratorMode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IteratorMode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IteratorMode.dir/clean

CMakeFiles/IteratorMode.dir/depend:
	cd /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/luzh/nodeAddon/DesignPatterns/IteratorMode /Users/luzh/nodeAddon/DesignPatterns/IteratorMode /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug /Users/luzh/nodeAddon/DesignPatterns/IteratorMode/cmake-build-debug/CMakeFiles/IteratorMode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IteratorMode.dir/depend

