cmake_minimum_required(VERSION 3.8)
project(GOP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/square/Square.cpp src/square/Square.h src/square/VoidSquare.cpp src/square/VoidSquare.h src/square/DrawCardSquare.cpp src/square/DrawCardSquare.h src/square/MoveSquare.cpp src/square/MoveSquare.h src/square/MissTurnSquare.cpp src/square/MissTurnSquare.h src/square/BackStartSquare.cpp src/square/BackStartSquare.h src/square/StartSquare.cpp src/square/StartSquare.h src/square/FinishSquare.cpp src/square/FinishSquare.h src/player/Player.cpp src/player/Player.h Cards/Cards.cpp Cards/Cards.h Cards/SwitchPosition.cpp Cards/SwitchPosition.h Cards/ThrowAgain.cpp Cards/ThrowAgain.h Cards/GoAhead.cpp Cards/GoAhead.h Cards/GoBack.cpp Cards/GoBack.h)
add_executable(GOP ${SOURCE_FILES})