//
// Created by cavaz on 12/01/2018.
//

#include "Game.h"
#include "iostream"
#include "../square/VoidSquare.h"
#include "../square/DrawCardSquare.h"
#include "../square/MoveSquare.h"
#include "../square/MissTurnSquare.h"
#include "../square/BackStartSquare.h"
#include "../square/StartSquare.h"
#include "../square/FinishSquare.h"
#include "../utils.h"

using namespace std;


Game::Game() {
    //initPlayers();
    //initSquares();

    gameLoop();
}

void Game::initPlayers() {
    char name[50];

    cout << "Numero di giocatori (max 10): ";
    cin >> numPlayers;

    for (int i = 0; i < numPlayers; ++i) {
        cout << "Nome giocatore " << i+1 << ": ";
        cin >> name;
        players[i] = new Player(name, 0);
    }

    currPlayer = 0;
}

void Game::initSquares() {
    srand((unsigned)time(nullptr));

    this->numSquares = rand() % 41 + 60;

    squares[0] = new StartSquare();
    squares[numSquares - 1] = new FinishSquare();

    for (int i = 1; i < numSquares - 1; ++i) {
        int randInt = rand() % 100 + 1;

        if (randInt <= 30)
            squares[i] = new VoidSquare();
        else if (randInt <= 50)
            squares[i] = new DrawCardSquare();
        else if (randInt <= 68)
            squares[i] = new MoveSquare(3);
        else if (randInt <= 86)
            squares[i] = new MoveSquare(-5);
        else if (randInt <= 98)
            squares[i] = new MissTurnSquare(1);
        else
            squares[i] = new BackStartSquare();
    }
}

void Game::gameLoop() {
    nextPlayer();

    // Clear screen
    cls();

    cout << "Turno di" << players[currPlayer]->getName() << " - Giocatore " << currPlayer + 1 << endl;
    // Call draw squares

    // Call throw dice

    // Execute action
}

void Game::nextPlayer() {
    if (currPlayer == numPlayers - 1) {
        currPlayer = 0;
    } else {
        currPlayer++;
    }
}

void Game::movePlayer(int movement) {
}

void Game::drawCard() {

}

void Game::missTurn() {

}

void Game::backStart() {

}

void Game::throwAgain() {

}

void Game::switchPosition() {

}

void Game::finish() {

}
