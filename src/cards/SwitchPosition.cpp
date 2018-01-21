//
// Created by notty on 11/01/2018.
//

#include "SwitchPosition.h"

SwitchPosition::SwitchPosition() : Card() {
    setMessage(this->text);
}

void SwitchPosition::effetto(Game* game) {
    game->switchPosition();
}