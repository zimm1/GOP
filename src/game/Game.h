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
    bool isFinish = false;

    int numPlayers = 0;
    int currPlayer = 0;
    int numSquares = 0;

    void initPlayers();
    void initSquares();
    void checkSquares();

    void gameLoop();
    void throwDice();
    void executeSquare();

    int nextPlayer();
    int prevPlayer();

    void showEnd();

public:
    Game();

    void movePlayer(int movement);
    void drawCard();
    void executeCard(Card* card);
    void missTurn(int turns);
    void backStart();
    void throwAgain();
    void switchPosition();
    void finish();
    void showSquares();
};


#endif //GOP_GAME_H
