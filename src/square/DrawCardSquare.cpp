//
// Created by cavaz on 12/01/2018.
//

#include "DrawCardSquare.h"

DrawCardSquare::DrawCardSquare() {
    setMessage("Pesca una carta");
    this->color = Color ::magenta;
    this->setType(DrawCard);
}

void DrawCardSquare::effect(Game *game) {
    game->drawCard();
}
