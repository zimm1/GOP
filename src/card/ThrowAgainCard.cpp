//
// Created by notty on 11/01/2018.
//

#include "ThrowAgainCard.h"

ThrowAgain::ThrowAgain() : Card(){
    setMessage(this->text);
}

void ThrowAgain::effetto(Game* game) {
    game->throwAgain();
}
