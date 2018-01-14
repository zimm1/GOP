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
    string s = to_string(this->value);
    //se il numero è negativo passa la seconda cifra ignorando così il segno -
    replace(this->message.begin(),this->message.end(),'x',(this->value > 0) ? s[0] : s[1]);
    //se il numero è maggiore di 1 (o -1 nel caso GoBack)
    replace(this->message.begin(),this->message.end(),'y',(this->value == 1 || this->value == -1) ? 'a' : 'e');
    return this->message;
}

void Cards::setMessage(string message) {
    this->message = message;
}

int Cards::getValue() {
    return this->value;
}
