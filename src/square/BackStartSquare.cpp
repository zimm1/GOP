//
// Created by cavaz on 12/01/2018.
//

#include "BackStartSquare.h"

BackStartSquare::BackStartSquare() {
    setMessage("Torna all'inizio");
    this->color = Color ::red;
}

void BackStartSquare::effect(Game* game) {
    game->backStart();
}
