//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_BACKSTARTSQUARE_H
#define GOP_BACKSTARTSQUARE_H


#include "Square.h"

class BackStartSquare : public Square {
public:
    BackStartSquare();

    void effect(Game* game) override;
};


#endif //GOP_BACKSTARTSQUARE_H
