//
// Created by cavaz on 12/01/2018.
//

#include <cstring>
#include <cstdlib>
#include "MoveSquare.h"
#include "../utils.h"


MoveSquare::MoveSquare(int movement) {
    setMovement(movement);
    buildMessage();
    this->color = (movement > 0) ? Color::cyan : Color::yellow;
}

void MoveSquare::effect(Game* game) {
    game->movePlayer(movement);
}

int MoveSquare::getMovement() const {
    return movement;
}

void MoveSquare::setMovement(int movement) {
    MoveSquare::movement = movement;
}

char* MoveSquare::buildMessage() {
    char number[5];
    my_itoa(abs(movement), number);

    char message[50] = "Vai ";
    strcat(message, movement > 0 ? "avanti" : "indietro");
    strcat(message, " di ");
    strcat(message, number);
    strcat(message, abs(movement) > 1 ? " posizioni" : " posizione");

    setMessage(message);
}
