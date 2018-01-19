//
// Created by notty on 11/01/2018.
//

#include <cstring>
#include "Card.h"

Card::Card() = default;

Card::Card(string message) {
    this->message = message;
}

void Card::effetto(Game* game) {
}

string Card::getMessage(){
    return this->message;
}

void Card::setMessage(string message) {
    this->message = message;
}
