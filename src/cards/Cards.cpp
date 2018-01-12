//
// Created by notty on 11/01/2018.
//

#include "Cards.h"

Cards::Cards(){}

Cards::Cards(string message) {
    this->message = message;
}

void Cards::effetto() {
}

string Cards::getMessage(){
    return this->message;
}

void Cards::setMessage(string message) {
    this->message = message;
}

int Cards::getValue() {
    return this->value;
}
