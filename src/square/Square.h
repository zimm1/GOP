//
// Created by cavaz on 11/01/2018.
//

#ifndef GOP_SQUARE_H
#define GOP_SQUARE_H

class Game;
#include "../game/Game.h"


enum SquareType {
    Default,
    Void,
    Start,
    Finish,
    Move,
    DrawCard,
    MissTurn,
    BackStart
};

class Square {
protected:
    Color color;
    char message[100];
    SquareType type;

public:
    Square();

    virtual void effect(Game* game);

    virtual Color getColor();

    const char* getMessage() const;
    void setMessage(const char* message);

    SquareType getType() const;

    void setType(SquareType type);
};


#endif //GOP_SQUARE_H
