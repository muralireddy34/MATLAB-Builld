cmake_minimum_required(VERSION 3.15)
project(CMake-Build)
set(CMAKE_CXX_STANDARD 14)

# Set the compiler paths
set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")

# Create your executable target (with a different name).
add_executable(carcrashnewnew.exe carcrashnewnew.c)
