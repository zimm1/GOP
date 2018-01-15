//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_GAME_H
#define GOP_GAME_H

class Square;
#include "../player/Player.h"
#include "../square/Square.h"
#include "../deck/Deck.h"


class Game {
    Player *players[10];
    Square *squares[100];
    Deck *deck;

    int numPlayers;
    int currPlayer;
    int numSquares;

    void initPlayers();
    void initSquares();

    void gameLoop();
    void throwDice();
    void executeAction();

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
