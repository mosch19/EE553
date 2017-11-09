cmake_minimum_required(VERSION 3.8)
project(lecture09)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp vector.cpp vector_polymorphism.cpp)
add_executable(lecture09 ${SOURCE_FILES})