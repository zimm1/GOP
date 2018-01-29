//
// Created by notty on 11/01/2018.
//

#include "ThrowAgainCard.h"

ThrowAgain::ThrowAgain() : Card(){
    strcpy(this->text,"Tira Ancora");
    setMessage(this->text);
}

void ThrowAgain::effetto(Game* game) {
    game->throwAgain();
}
