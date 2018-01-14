//
// Created by notty on 11/01/2018.
//


#include "GoBack.h"

GoBack::GoBack() : Cards(){
    setMessage(this->text);
    srand((time(nullptr)));
    this->value = (rand()%6)*(-1);
    /*random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1,5);
    this->value = dist(mt)*(-1);*/
}

void GoBack::effetto(Game* game) {
    game->movePlayer(this->value);
}
