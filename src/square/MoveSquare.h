//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_MOVESQUARE_H
#define GOP_MOVESQUARE_H


#include "Square.h"

class MoveSquare: public Square {
    int movement;

    char* buildMessage();
public:
    explicit MoveSquare(int movement);

    int getMovement() const;
    void setMovement(int movement);
};


#endif //GOP_MOVESQUARE_H
