//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_FINISHSQUARE_H
#define GOP_FINISHSQUARE_H


#include "Square.h"

class FinishSquare: public Square {
public:
    FinishSquare();

    void effect(Game* game) override;
};


#endif //GOP_FINISHSQUARE_H
