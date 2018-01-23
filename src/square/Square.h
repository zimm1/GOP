//
// Created by cavaz on 11/01/2018.
//

#ifndef GOP_SQUARE_H
#define GOP_SQUARE_H

class Game;
#include "../game/Game.h"

class Square {
    char message[100];
protected:
    Color color;

public:
    Square();

    virtual void effect(Game* game);

    virtual Color getColorSquare();

    const char* getMessage() const;
    void setMessage(const char* message);
};


#endif //GOP_SQUARE_H
