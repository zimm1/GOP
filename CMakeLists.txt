cmake_minimum_required(VERSION 3.8)
project(GOP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/player/Player.cpp src/player/Player.h)
add_executable(GOP ${SOURCE_FILES})