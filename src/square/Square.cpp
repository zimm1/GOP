//
// Created by cavaz on 11/01/2018.
//

#include "Square.h"
#include "../game/Game.h"

#include <iostream>
#include <cstring>

using namespace std;

// Messaggio della casella, colore e tipo di default
Square::Square() {
    setMessage("Default message");
    this->color = Color ::white;
    setType(Default);
}

// Chiamato per eseguire l'azione della casella
void Square::effect(Game *game) {
    //
}

const char* Square::getMessage() const {
    return this->message;
}

void Square::setMessage(const char* message) {
    strcpy(this->message, message);
}

Color Square::getColor() {
    return this->color;
}

SquareType Square::getType() const {
    return type;
}

void Square::setType(SquareType type) {
    Square::type = type;
}
