# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zmc/MyProject/BookCrawler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zmc/MyProject/BookCrawler/build

# Include any dependencies generated for this target.
include src/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/main.dir/flags.make

src/CMakeFiles/main.dir/main.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zmc/MyProject/BookCrawler/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/main.dir/main.cpp.o"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /home/zmc/MyProject/BookCrawler/src/main.cpp

src/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zmc/MyProject/BookCrawler/src/main.cpp > CMakeFiles/main.dir/main.cpp.i

src/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zmc/MyProject/BookCrawler/src/main.cpp -o CMakeFiles/main.dir/main.cpp.s

src/CMakeFiles/main.dir/main.cpp.o.requires:
.PHONY : src/CMakeFiles/main.dir/main.cpp.o.requires

src/CMakeFiles/main.dir/main.cpp.o.provides: src/CMakeFiles/main.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/main.dir/main.cpp.o.provides

src/CMakeFiles/main.dir/main.cpp.o.provides.build: src/CMakeFiles/main.dir/main.cpp.o

src/CMakeFiles/main.dir/apps/global.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/apps/global.cpp.o: ../src/apps/global.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zmc/MyProject/BookCrawler/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/main.dir/apps/global.cpp.o"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/apps/global.cpp.o -c /home/zmc/MyProject/BookCrawler/src/apps/global.cpp

src/CMakeFiles/main.dir/apps/global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/apps/global.cpp.i"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zmc/MyProject/BookCrawler/src/apps/global.cpp > CMakeFiles/main.dir/apps/global.cpp.i

src/CMakeFiles/main.dir/apps/global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/apps/global.cpp.s"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zmc/MyProject/BookCrawler/src/apps/global.cpp -o CMakeFiles/main.dir/apps/global.cpp.s

src/CMakeFiles/main.dir/apps/global.cpp.o.requires:
.PHONY : src/CMakeFiles/main.dir/apps/global.cpp.o.requires

src/CMakeFiles/main.dir/apps/global.cpp.o.provides: src/CMakeFiles/main.dir/apps/global.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/apps/global.cpp.o.provides.build
.PHONY : src/CMakeFiles/main.dir/apps/global.cpp.o.provides

src/CMakeFiles/main.dir/apps/global.cpp.o.provides.build: src/CMakeFiles/main.dir/apps/global.cpp.o

src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o: ../src/apps/HTTP360buyStream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zmc/MyProject/BookCrawler/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o -c /home/zmc/MyProject/BookCrawler/src/apps/HTTP360buyStream.cpp

src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.i"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zmc/MyProject/BookCrawler/src/apps/HTTP360buyStream.cpp > CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.i

src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.s"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zmc/MyProject/BookCrawler/src/apps/HTTP360buyStream.cpp -o CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.s

src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.requires:
.PHONY : src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.requires

src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.provides: src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.provides.build
.PHONY : src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.provides

src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.provides.build: src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o

src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o: ../src/apps/PageDownloader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zmc/MyProject/BookCrawler/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/apps/PageDownloader.cpp.o -c /home/zmc/MyProject/BookCrawler/src/apps/PageDownloader.cpp

src/CMakeFiles/main.dir/apps/PageDownloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/apps/PageDownloader.cpp.i"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zmc/MyProject/BookCrawler/src/apps/PageDownloader.cpp > CMakeFiles/main.dir/apps/PageDownloader.cpp.i

src/CMakeFiles/main.dir/apps/PageDownloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/apps/PageDownloader.cpp.s"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zmc/MyProject/BookCrawler/src/apps/PageDownloader.cpp -o CMakeFiles/main.dir/apps/PageDownloader.cpp.s

src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.requires:
.PHONY : src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.requires

src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.provides: src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.provides.build
.PHONY : src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.provides

src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.provides.build: src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o

src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o: ../src/apps/URLElesupStream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zmc/MyProject/BookCrawler/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/apps/URLElesupStream.cpp.o -c /home/zmc/MyProject/BookCrawler/src/apps/URLElesupStream.cpp

src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/apps/URLElesupStream.cpp.i"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zmc/MyProject/BookCrawler/src/apps/URLElesupStream.cpp > CMakeFiles/main.dir/apps/URLElesupStream.cpp.i

src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/apps/URLElesupStream.cpp.s"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zmc/MyProject/BookCrawler/src/apps/URLElesupStream.cpp -o CMakeFiles/main.dir/apps/URLElesupStream.cpp.s

src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.requires:
.PHONY : src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.requires

src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.provides: src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.provides.build
.PHONY : src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.provides

src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.provides.build: src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o

src/CMakeFiles/main.dir/apps/BookInfo.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/apps/BookInfo.cpp.o: ../src/apps/BookInfo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zmc/MyProject/BookCrawler/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/main.dir/apps/BookInfo.cpp.o"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/apps/BookInfo.cpp.o -c /home/zmc/MyProject/BookCrawler/src/apps/BookInfo.cpp

src/CMakeFiles/main.dir/apps/BookInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/apps/BookInfo.cpp.i"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zmc/MyProject/BookCrawler/src/apps/BookInfo.cpp > CMakeFiles/main.dir/apps/BookInfo.cpp.i

src/CMakeFiles/main.dir/apps/BookInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/apps/BookInfo.cpp.s"
	cd /home/zmc/MyProject/BookCrawler/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zmc/MyProject/BookCrawler/src/apps/BookInfo.cpp -o CMakeFiles/main.dir/apps/BookInfo.cpp.s

src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.requires:
.PHONY : src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.requires

src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.provides: src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.provides.build
.PHONY : src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.provides

src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.provides.build: src/CMakeFiles/main.dir/apps/BookInfo.cpp.o

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/apps/global.cpp.o" \
"CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o" \
"CMakeFiles/main.dir/apps/PageDownloader.cpp.o" \
"CMakeFiles/main.dir/apps/URLElesupStream.cpp.o" \
"CMakeFiles/main.dir/apps/BookInfo.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

../bin/main: src/CMakeFiles/main.dir/main.cpp.o
../bin/main: src/CMakeFiles/main.dir/apps/global.cpp.o
../bin/main: src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o
../bin/main: src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o
../bin/main: src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o
../bin/main: src/CMakeFiles/main.dir/apps/BookInfo.cpp.o
../bin/main: src/CMakeFiles/main.dir/build.make
../bin/main: src/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/main"
	cd /home/zmc/MyProject/BookCrawler/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/main.dir/build: ../bin/main
.PHONY : src/CMakeFiles/main.dir/build

src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/main.cpp.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/apps/global.cpp.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/apps/HTTP360buyStream.cpp.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/apps/PageDownloader.cpp.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/apps/URLElesupStream.cpp.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/apps/BookInfo.cpp.o.requires
.PHONY : src/CMakeFiles/main.dir/requires

src/CMakeFiles/main.dir/clean:
	cd /home/zmc/MyProject/BookCrawler/build/src && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/main.dir/clean

src/CMakeFiles/main.dir/depend:
	cd /home/zmc/MyProject/BookCrawler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zmc/MyProject/BookCrawler /home/zmc/MyProject/BookCrawler/src /home/zmc/MyProject/BookCrawler/build /home/zmc/MyProject/BookCrawler/build/src /home/zmc/MyProject/BookCrawler/build/src/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/main.dir/depend

