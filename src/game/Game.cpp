//
// Created by cavaz on 12/01/2018.
//

#include "Game.h"
#include "../square/VoidSquare.h"
#include "../square/DrawCardSquare.h"
#include "../square/MoveSquare.h"
#include "../square/MissTurnSquare.h"
#include "../square/BackStartSquare.h"
#include "../square/StartSquare.h"
#include "../square/FinishSquare.h"
#include "../utils.h"
#include "../cards/Cards.h"

using namespace std;


Game::Game() {
    initPlayers();
    initSquares();

    deck = new Deck();

    while (!isFinish)
        gameLoop();

    currPlayer = prevPlayer();
    cout << "Ha vinto il giocatore " << currPlayer + 1 << ". " << players[currPlayer]->getName() << endl;
    cout << "Bye bye" << endl;
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

        if (randInt <= 65)
            squares[i] = new VoidSquare();
        else if (randInt <= 80)
            squares[i] = new DrawCardSquare();
        else if (randInt <= 87)
            squares[i] = new MoveSquare(rand()% 5+1);
        else if (randInt <= 94)
            squares[i] = new MoveSquare(-(rand()% 5+1));
        else if (randInt <= 98)
            squares[i] = new MissTurnSquare(1);
        else
            squares[i] = new BackStartSquare();
    }
}

void Game::gameLoop() {
    // Clear screen
    cls();

    cout << "Turno di " << players[currPlayer]->getName() << " - Giocatore " << currPlayer + 1 << endl;

    showSquares();

    pause();

    if (players[currPlayer]->isBlocked()) {
        cout << "Salta il turno" << endl;
        pause();
    } else {
        throwDice();
    }

    currPlayer = nextPlayer();
}

void Game::throwDice() {
    srand((unsigned)time(nullptr));

    int score = rand() % 12 + 1;

    cout << "Hai fatto " << score << endl;

    movePlayer(score);
}

void Game::executeAction() {
    squares[players[currPlayer]->getPos()]->effect(this);
}


int Game::nextPlayer() {
    if (currPlayer == numPlayers - 1) {
        return 0;
    }

    return currPlayer + 1;
}

int Game::prevPlayer() {
    if (currPlayer == 0) {
        return numPlayers - 1;
    }

    return currPlayer - 1;
}


void Game::movePlayer(int movement) {
    int newPos = players[currPlayer]->getPos() + movement;

    // < 0
    newPos = newPos < 0 ? 0 : newPos;

    // > numSquares - 1
    newPos = newPos < numSquares ? newPos : numSquares * 2 - newPos;

    players[currPlayer]->setPos(newPos);

    cout << "Sei andato sulla casella "
         << players[currPlayer]->getPos() << ". "
         << squares[players[currPlayer]->getPos()]->getMessage();

    pause();

    executeAction();
}

void Game::drawCard() {
    Cards* card = deck->drawCard();

    cout << "Carta : " << card->getMessage() << endl;

    pause();

    card->effetto(this);
}

void Game::missTurn(int turns) {
    players[currPlayer]->setNumTurns(turns);
}

void Game::backStart() {
    players[currPlayer]->setPos(0);
}

void Game::throwAgain() {
    throwDice();
}

void Game::switchPosition() {
    //cambia la posizione del giocatore attuale con quello precedente
    int posPlayer = players[currPlayer]->getPos();
    int posPlayer2 = players[nextPlayer()]->getPos();
    players[currPlayer]->setPos(posPlayer2);
    players[nextPlayer()]->setPos(posPlayer);

    executeAction();
}

void Game::finish() {
    isFinish = true;
}

void Game::showSquares() {
    for(int i = 0; i < numSquares; i++)
        cout << "Casella " << i << '\t' <<squares[i]->getMessage() << endl;
}
