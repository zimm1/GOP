//
// Created by cavaz on 12/01/2018.
//

#include <cstdlib>
#include <cstring>
#include "MissTurnSquare.h"


MissTurnSquare::MissTurnSquare(int turns) {
    setTurns(turns);
    buildMessage();
}

int MissTurnSquare::getTurns() const {
    return turns;
}

void MissTurnSquare::setTurns(int turns) {
    MissTurnSquare::turns = turns;
}

char *MissTurnSquare::buildMessage() {
    char number[5];
    itoa(abs(turns), number, 10);

    char message[50] = "Salta ";
    strcat(message, number);
    strcat(message, turns > 1 ? " turni" : " turno");

    setMessage(message);
}