//
// Created by cavaz on 12/01/2018.
//

#include "FinishSquare.h"

FinishSquare::FinishSquare() {
    setMessage("Arrivo");
    this->color = Color::green;
    this->setType(Finish);
}

void FinishSquare::effect(Game* game) {
    game->finish();
}
