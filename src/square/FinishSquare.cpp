//
// Created by cavaz on 12/01/2018.
//

#include "FinishSquare.h"

FinishSquare::FinishSquare() {
    setMessage("Arrivo");
    this->color = Color::green;
}

void FinishSquare::effect(Game* game) {
    game->finish();
}
