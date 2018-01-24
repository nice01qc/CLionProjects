cmake_minimum_required(VERSION 3.8)
project(untitled3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp first.cpp second.h second.cpp first.h third.cpp third.h four.cpp four.h)
add_executable(untitled3 ${SOURCE_FILES})