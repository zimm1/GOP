//
// Created by notty on 11/01/2018.
//

#include <cstring>
#include "Card.h"

Card::Card() = default;

Card::Card(char*  message) {
    strcpy(this->message, message);
}

void Card::effetto(Game* game) {
}

char* Card::getMessage(){
    return this->message;
}

void Card::setMessage(char*  message) {
    strcpy(this->message,message);
}
