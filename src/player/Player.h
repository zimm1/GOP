//
// Created by Keans on 11/01/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H


#include "../graphics/Color.h"

class Player {
private:
    char name[50];
    int pos;
    int numTurns;
    Color color;
    void add_color(int pos);

public:

    Player(char name[50], int pos_player);

    const char *getName() const;

    int getPos() const;

    void setPos(int pos);

    void setNumTurns(int numTurns);

    int getNumTurns();

    bool isBlocked();

    void decNumTurns();
};



#endif //GOP_PLAYER_H
