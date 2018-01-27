//
// Created by notty on 11/01/2018.
//

#include <cstring>
#include "Card.h"

Card::Card() = default;

Card::Card(char  message[max_length]) {
    strcpy(this->message, message);
}

void Card::effetto(Game* game) {
}

char* Card::getMessage(){
    return this->message;
}

void Card::setMessage(char  message[50]) {
    strcpy(this->message,message);
}
