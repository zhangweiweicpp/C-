# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (main)
SET(CMAKE_BUILD_TYPE "Debug")
# SET(CMAKE_BUILD_TYPE "Release")
# Add an executable
add_executable(main main.cpp)