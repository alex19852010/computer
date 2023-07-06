cmake_minimum_required(VERSION 3.21)
project(test_cmake)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_cmake main.cpp ram.h ram.cpp kbd.h kbd.cpp gpu.h gpu.cpp cpu.h cpu.cpp disk.h disk.cpp)