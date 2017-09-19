cmake_minimum_required(VERSION 3.8)
project(Lecture03)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp oop.cpp hw3x.cpp hw3a.cpp hw3b.cpp notes.cpp)
add_executable(Lecture03 ${SOURCE_FILES})