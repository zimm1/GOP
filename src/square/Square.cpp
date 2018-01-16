//
// Created by cavaz on 11/01/2018.
//

#include "Square.h"
#include "../game/Game.h"

#include <iostream>
#include <cstring>

using namespace std;

Square::Square() {
    setMessage("Default message");
}

void Square::effect(Game *game) {
    //
}

const char* Square::getMessage() const {
    return this->message;
}

void Square::setMessage(const char* message) {
    strcpy(this->message, message);
}
