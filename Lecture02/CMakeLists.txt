cmake_minimum_required(VERSION 3.8)
project(Lecture02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp functions.cpp arrays.cpp test.cpp hw2b.cpp hw2e.cpp hw2c.cpp hw2a.cpp)
add_executable(Lecture02 ${SOURCE_FILES})