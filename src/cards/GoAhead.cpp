//
// Created by notty on 11/01/2018.
//

#include "GoAhead.h"

GoAhead::GoAhead() : Cards(){
    setMessage(this->text);
    srand((time(nullptr)));
    this->value = (rand()%6);
}

void GoAhead::effetto(Game* game) {
    game->movePlayer(this->value);
}
