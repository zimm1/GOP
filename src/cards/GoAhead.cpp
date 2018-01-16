//
// Created by notty on 11/01/2018.
//

#include "GoAhead.h"

GoAhead::GoAhead() : Cards(){
    setMessage(this->text);
    srand((unsigned)time(nullptr));
    //genera numeri da 1 a 5
    setValue((rand()%5)+1);
}

void GoAhead::setValue(int value) {
    this->value = value;
}

int GoAhead::getValue() {
    return this->value;
}

string GoAhead::getMessage() {
    string s = Cards::getMessage().insert(14,to_string(this->value));
    replace(s.begin(),s.end(),'y',(this->value == 1) ? 'a' : 'e');
    return s;
}

void GoAhead::effetto(Game* game) {
    game->movePlayer(this->value);
}