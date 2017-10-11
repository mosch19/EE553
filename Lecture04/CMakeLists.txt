cmake_minimum_required(VERSION 3.8)
project(Lecture04)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp matrix.cpp hw4a.cpp hw4c.cpp)
add_executable(Lecture04 ${SOURCE_FILES})