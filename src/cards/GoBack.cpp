//
// Created by notty on 11/01/2018.
//


#include "GoBack.h"

GoBack::GoBack() : Card(){
    setMessage(this->text);
    srand((unsigned)time(nullptr));
    //genera numeri negativi da -5 a -1
    setValue((rand()%5+1)*(-1));
}

int GoBack::getValue() {
    return this->value;
}

void GoBack::setValue(int value){
    this->value = value;
}

string GoBack::getMessage(){
    string s = Card::getMessage().insert(18,to_string((this->value)*(-1)));
    replace(s.begin(),s.end(),'y',(this->value == -1) ? 'a' : 'e');
    return s;
}

void GoBack::effetto(Game* game) {
    game->movePlayer(this->value);
}
