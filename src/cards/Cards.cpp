//
// Created by notty on 11/01/2018.
//

#include <cstring>
#include "Cards.h"

Cards::Cards() = default;

Cards::Cards(string message) {
    this->message = message;
}

void Cards::effetto(Game* game) {
}

string Cards::getMessage(){
    return this->message;
}

void Cards::setMessage(string message) {
    this->message = message;
}
