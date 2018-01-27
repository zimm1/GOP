cmake_minimum_required(VERSION 3.6)
project(GOP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/square/Square.cpp src/square/Square.h src/square/VoidSquare.cpp src/square/VoidSquare.h src/square/DrawCardSquare.cpp src/square/DrawCardSquare.h src/square/MoveSquare.cpp src/square/MoveSquare.h src/square/MissTurnSquare.cpp src/square/MissTurnSquare.h src/square/BackStartSquare.cpp src/square/BackStartSquare.h src/square/StartSquare.cpp src/square/StartSquare.h src/square/FinishSquare.cpp src/square/FinishSquare.h src/player/Player.cpp src/player/Player.h src/card/Card.cpp src/card/Card.h src/card/SwitchPositionCard.cpp src/card/SwitchPositionCard.h src/card/ThrowAgainCard.cpp src/card/ThrowAgainCard.h src/card/GoAheadCard.cpp src/card/GoAheadCard.h src/card/GoBackCard.cpp src/card/GoBackCard.h src/utils.cpp src/utils.h src/game/Game.cpp src/game/Game.h src/deck/Deck.cpp src/deck/Deck.h src/card/QuestionCard.cpp src/card/QuestionCard.h src/questions.cpp src/questions.h src/graphics/Color.h src/graphics/Color.cpp)

add_executable(GOP ${SOURCE_FILES})