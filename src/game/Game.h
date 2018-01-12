//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_GAME_H
#define GOP_GAME_H

class Square;
#include "../player/Player.h"
#include "../square/Square.h"

class Game {
    Player *players = nullptr;
    Square *squares = nullptr;

    int numPlayers;
    int currPlayer;

    void nextPlayer();

public:
    Game();

    void movePlayer(int movement);
    void drawCard();
    void missTurn();
    void backStart();
    void throwAgain();
    void switchPosition();
    void finish();
};


#endif //GOP_GAME_H
