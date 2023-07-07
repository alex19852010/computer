cmake_minimum_required(VERSION 3.21)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(test_cmake main.cpp ${MY_INCLUDE_DIR}/ram.h ram.cpp ${MY_INCLUDE_DIR}/kbd.h kbd.cpp ${MY_INCLUDE_DIR}/gpu.h gpu.cpp ${MY_INCLUDE_DIR}/cpu.h 
cpu.cpp ${MY_INCLUDE_DIR}/disk.h disk.cpp)
target_include_directories(test_cmake PUBLIC ${MY_INCLUDE_DIR})