cmake_minimum_required(VERSION 3.9)
project(cppprime12)

set(CMAKE_CXX_STANDARD 11)

add_executable(cppprime12 main.cpp StrBlob.h StrBlob.cpp StrBlobPtr.h StrBlobPtr.cpp QueryResult.h TextQuery.h TextQuery.cpp QueryResult.cpp)