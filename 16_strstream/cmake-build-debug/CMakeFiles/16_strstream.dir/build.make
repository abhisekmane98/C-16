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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "H:\4. Codes\C++  2021\C++6 Clion\16_strstream"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/16_strstream.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/16_strstream.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/16_strstream.dir/flags.make

CMakeFiles/16_strstream.dir/main.cpp.obj: CMakeFiles/16_strstream.dir/flags.make
CMakeFiles/16_strstream.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="H:\4. Codes\C++  2021\C++6 Clion\16_strstream\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/16_strstream.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\16_strstream.dir\main.cpp.obj -c "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\main.cpp"

CMakeFiles/16_strstream.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/16_strstream.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\main.cpp" > CMakeFiles\16_strstream.dir\main.cpp.i

CMakeFiles/16_strstream.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/16_strstream.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\main.cpp" -o CMakeFiles\16_strstream.dir\main.cpp.s

# Object files for target 16_strstream
16_strstream_OBJECTS = \
"CMakeFiles/16_strstream.dir/main.cpp.obj"

# External object files for target 16_strstream
16_strstream_EXTERNAL_OBJECTS =

16_strstream.exe: CMakeFiles/16_strstream.dir/main.cpp.obj
16_strstream.exe: CMakeFiles/16_strstream.dir/build.make
16_strstream.exe: CMakeFiles/16_strstream.dir/linklibs.rsp
16_strstream.exe: CMakeFiles/16_strstream.dir/objects1.rsp
16_strstream.exe: CMakeFiles/16_strstream.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="H:\4. Codes\C++  2021\C++6 Clion\16_strstream\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 16_strstream.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\16_strstream.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/16_strstream.dir/build: 16_strstream.exe
.PHONY : CMakeFiles/16_strstream.dir/build

CMakeFiles/16_strstream.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\16_strstream.dir\cmake_clean.cmake
.PHONY : CMakeFiles/16_strstream.dir/clean

CMakeFiles/16_strstream.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "H:\4. Codes\C++  2021\C++6 Clion\16_strstream" "H:\4. Codes\C++  2021\C++6 Clion\16_strstream" "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\cmake-build-debug" "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\cmake-build-debug" "H:\4. Codes\C++  2021\C++6 Clion\16_strstream\cmake-build-debug\CMakeFiles\16_strstream.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/16_strstream.dir/depend

