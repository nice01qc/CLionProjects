cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES library.cpp)
add_library(untitled ${SOURCE_FILES})