# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HackAssembler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HackAssembler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HackAssembler.dir/flags.make

CMakeFiles/HackAssembler.dir/main.c.obj: CMakeFiles/HackAssembler.dir/flags.make
CMakeFiles/HackAssembler.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HackAssembler.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HackAssembler.dir\main.c.obj   -c C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\main.c

CMakeFiles/HackAssembler.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HackAssembler.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\main.c > CMakeFiles\HackAssembler.dir\main.c.i

CMakeFiles/HackAssembler.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HackAssembler.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\main.c -o CMakeFiles\HackAssembler.dir\main.c.s

CMakeFiles/HackAssembler.dir/Parser.c.obj: CMakeFiles/HackAssembler.dir/flags.make
CMakeFiles/HackAssembler.dir/Parser.c.obj: ../Parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HackAssembler.dir/Parser.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HackAssembler.dir\Parser.c.obj   -c C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\Parser.c

CMakeFiles/HackAssembler.dir/Parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HackAssembler.dir/Parser.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\Parser.c > CMakeFiles\HackAssembler.dir\Parser.c.i

CMakeFiles/HackAssembler.dir/Parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HackAssembler.dir/Parser.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\Parser.c -o CMakeFiles\HackAssembler.dir\Parser.c.s

CMakeFiles/HackAssembler.dir/A-Instruction.c.obj: CMakeFiles/HackAssembler.dir/flags.make
CMakeFiles/HackAssembler.dir/A-Instruction.c.obj: ../A-Instruction.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/HackAssembler.dir/A-Instruction.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HackAssembler.dir\A-Instruction.c.obj   -c C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\A-Instruction.c

CMakeFiles/HackAssembler.dir/A-Instruction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HackAssembler.dir/A-Instruction.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\A-Instruction.c > CMakeFiles\HackAssembler.dir\A-Instruction.c.i

CMakeFiles/HackAssembler.dir/A-Instruction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HackAssembler.dir/A-Instruction.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\A-Instruction.c -o CMakeFiles\HackAssembler.dir\A-Instruction.c.s

CMakeFiles/HackAssembler.dir/strmap.c.obj: CMakeFiles/HackAssembler.dir/flags.make
CMakeFiles/HackAssembler.dir/strmap.c.obj: ../strmap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/HackAssembler.dir/strmap.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HackAssembler.dir\strmap.c.obj   -c C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\strmap.c

CMakeFiles/HackAssembler.dir/strmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HackAssembler.dir/strmap.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\strmap.c > CMakeFiles\HackAssembler.dir\strmap.c.i

CMakeFiles/HackAssembler.dir/strmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HackAssembler.dir/strmap.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\strmap.c -o CMakeFiles\HackAssembler.dir\strmap.c.s

CMakeFiles/HackAssembler.dir/C-Instruction.c.obj: CMakeFiles/HackAssembler.dir/flags.make
CMakeFiles/HackAssembler.dir/C-Instruction.c.obj: ../C-Instruction.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/HackAssembler.dir/C-Instruction.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HackAssembler.dir\C-Instruction.c.obj   -c C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\C-Instruction.c

CMakeFiles/HackAssembler.dir/C-Instruction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HackAssembler.dir/C-Instruction.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\C-Instruction.c > CMakeFiles\HackAssembler.dir\C-Instruction.c.i

CMakeFiles/HackAssembler.dir/C-Instruction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HackAssembler.dir/C-Instruction.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\C-Instruction.c -o CMakeFiles\HackAssembler.dir\C-Instruction.c.s

# Object files for target HackAssembler
HackAssembler_OBJECTS = \
"CMakeFiles/HackAssembler.dir/main.c.obj" \
"CMakeFiles/HackAssembler.dir/Parser.c.obj" \
"CMakeFiles/HackAssembler.dir/A-Instruction.c.obj" \
"CMakeFiles/HackAssembler.dir/strmap.c.obj" \
"CMakeFiles/HackAssembler.dir/C-Instruction.c.obj"

# External object files for target HackAssembler
HackAssembler_EXTERNAL_OBJECTS =

HackAssembler.exe: CMakeFiles/HackAssembler.dir/main.c.obj
HackAssembler.exe: CMakeFiles/HackAssembler.dir/Parser.c.obj
HackAssembler.exe: CMakeFiles/HackAssembler.dir/A-Instruction.c.obj
HackAssembler.exe: CMakeFiles/HackAssembler.dir/strmap.c.obj
HackAssembler.exe: CMakeFiles/HackAssembler.dir/C-Instruction.c.obj
HackAssembler.exe: CMakeFiles/HackAssembler.dir/build.make
HackAssembler.exe: CMakeFiles/HackAssembler.dir/linklibs.rsp
HackAssembler.exe: CMakeFiles/HackAssembler.dir/objects1.rsp
HackAssembler.exe: CMakeFiles/HackAssembler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable HackAssembler.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HackAssembler.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HackAssembler.dir/build: HackAssembler.exe

.PHONY : CMakeFiles/HackAssembler.dir/build

CMakeFiles/HackAssembler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HackAssembler.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HackAssembler.dir/clean

CMakeFiles/HackAssembler.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug C:\Users\eneag\OneDrive\Desktop\Progetti\HackAssembler\cmake-build-debug\CMakeFiles\HackAssembler.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HackAssembler.dir/depend

