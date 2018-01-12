cmake_minimum_required(VERSION 3.8)
project(GOP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/player/Player.cpp src/player/Player.h Cards/Cards.cpp Cards/Cards.h Cards/SwitchPosition.cpp Cards/SwitchPosition.h Cards/ThrowAgain.cpp Cards/ThrowAgain.h Cards/GoAhead.cpp Cards/GoAhead.h Cards/GoBack.cpp Cards/GoBack.h)
add_executable(GOP ${SOURCE_FILES})