cmake_minimum_required(VERSION 3.8)
project(calculate_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp first.h first.cpp)
add_executable(calculate_1 ${SOURCE_FILES})