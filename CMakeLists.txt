# ==================================
# CMake Build Configuration Template
# ==================================

# Minimum required CMake version (update based on your needs)
cmake_minimum_required(VERSION 3.8)

# Set the name, version and language of your project
project(dr-z VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)		# C++17 (added in CMake 3.8)
# set(CMAKE_CXX_STANDARD 20)    # C++20 (added in CMake 3.12)
# set(CMAKE_CXX_STANDARD 23)    # C++23 (added in CMake 3.20)
# set(CMAKE_CXX_STANDARD 26)    # C++26 (added in CMake 3.25)

# Enforce the selected standard (no compiler extensions)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set paths for output files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Source files for the executable
set(SOURCES
	src/main.cpp
	src/drz.cpp
)

# Header files for the executable
set(HEADERS
	src/drz.h
)

# Create main executable target
add_executable(dr-z ${SOURCES} ${HEADERS})

# Set the project as the initial one
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT dr-z)