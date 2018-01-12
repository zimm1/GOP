//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_DRAWCARDSQUARE_H
#define GOP_DRAWCARDSQUARE_H


#include "Square.h"

class DrawCardSquare : public Square {
public:
    DrawCardSquare();

    void effect(Game* game) override;
};


#endif //GOP_DRAWCARDSQUARE_H
