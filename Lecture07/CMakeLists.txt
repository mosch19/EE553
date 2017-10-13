cmake_minimum_required(VERSION 3.8)
project(Lecture07)

set(CMAKE_CXX_STANDARD 11)

set(ACCOUNT main.cpp Account.h Bank.h Account.cpp Bitmap.h floodFill.cpp)
add_executable(account ${ACCOUNT})

set(BITMAP testBitmap.cpp)
add_executable(bitmap ${BITMAP})