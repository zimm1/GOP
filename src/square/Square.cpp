//
// Created by cavaz on 11/01/2018.
//

#include "Square.h"

#include <iostream>
#include <cstring>

using namespace std;

Square::Square() {
    setMessage("Default message");
}

void Square::effect() {
    cout << message << endl;
}

const char* Square::getMessage() const {
    char *newMessage = nullptr;
    strcpy(newMessage, message);
    return newMessage;
}

void Square::setMessage(const char* message) {
    strcpy(this->message, message);
}
