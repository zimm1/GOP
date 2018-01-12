//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_MISSTURNSQUARE_H
#define GOP_MISSTURNSQUARE_H


#include "Square.h"

class MissTurnSquare : public Square{
    int turns;

    char* buildMessage();
public:
    explicit MissTurnSquare(int turns);

    int getTurns() const;
    void setTurns(int turns);
};


#endif //GOP_MISSTURNSQUARE_H
