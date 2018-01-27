//
// Created by cavaz on 12/01/2018.
//

#include <cstring>
#include <iomanip>
#include "Game.h"
#include "../square/VoidSquare.h"
#include "../square/DrawCardSquare.h"
#include "../square/MoveSquare.h"
#include "../square/MissTurnSquare.h"
#include "../square/BackStartSquare.h"
#include "../square/StartSquare.h"
#include "../square/FinishSquare.h"
#include "../utils.h"
#include "../card/Card.h"

using namespace std;

#define N_COLUMNS 3
#define W_COLUMN 39


Game::Game() {

    // Randomize unico per tutto il programma
    srand((unsigned)time(nullptr));

    // Inizializzazione di tutti i componenti del gioco
    initPlayers();
    initSquares();
    deck = new Deck();

    // Esegue il gioco fino a che non finisce
    while (!isFinish)
        gameLoop();

    showEnd();
}

// Inizializza i giocatori
void Game::initPlayers() {
    // Variabile di appoggio per leggere i nomi da tastiera
    char name[50];

    // Inserimento numero giocatori (da 1 a 4)
    while (numPlayers < 1 || numPlayers > 4) {
        cout << "Numero di giocatori (da 1 a 4): ";
        cin >> numPlayers;
        if (!cin.good() || numPlayers < 1 || numPlayers > 4) {
            cout << "Valore errato! ";
            clearCin();
        }
    }

    for (int i = 0; i < numPlayers; ++i) {
        cout << "Nome giocatore " << i+1 << ": ";
        cin >> name;
        players[i] = new Player(name, i);
    }

    // Reset dello stream di input
    cin.get();
}

// Inizializza le caselle
void Game::initSquares() {
    // Numero di caselle randomico, da 60 a 100
    this->numSquares = rand() % 41 + 60;

    // Inzializzazione prima e ultima casella
    squares[0] = new StartSquare();
    squares[numSquares - 1] = new FinishSquare();

    int voidChance = 100;
    int randInt = 0;

    // Generazione altre caselle
    /* Probabilità in percentuali:
     * - Vuota:                                     100% -> 70% -> 40% -> 10% -> 0%
     * Se non viene la casella vuota:
     * - Pesca una carta:                           45%
     * - Muovi giocatore avanti da 1 a 6 caselle:   21%
     * - Muovi gioatore indietro da 1 a 6 caselle:  21%
     * - Salta un turno:                            10%
     * - Torna alla partenza:                       3%
     */
    for (int i = 1; i < numSquares - 1; ++i) {
        randInt = rand() % 100 + 1;

        if (randInt <= voidChance) {
            squares[i] = new VoidSquare();
            voidChance -= 30;
        } else {
            voidChance = 100;

            randInt = rand() % 100 + 1;

            if (randInt <= 45)
                squares[i] = new DrawCardSquare();
            else if (randInt <= 66)
                squares[i] = new MoveSquare(rand() % 5 + 1);
            else if (randInt <= 87)
                squares[i] = new MoveSquare(-(rand() % 5 + 1));
            else if (randInt <= 97)
                squares[i] = new MissTurnSquare(1);
            else
                squares[i] = new BackStartSquare();
        }
    }

    checkSquares();
}

// Elimina movimenti verso caselle non vuote
void Game::checkSquares() {
    for (int i = 0; i < numSquares; ++i) {
        if (squares[i]->getType() != SquareType::Move) {
            continue;
        }

        MoveSquare* s = (MoveSquare*) squares[i];
        int mov = s->getMovement();

        while (i+mov < 0 || i+mov >= numSquares || squares[i+mov]->getType() != SquareType::Void) {
            mov = next1to6(mov);
        }
        s->setMovement(mov);
    }
}

// Turno di un giocatore
void Game::gameLoop() {
    // Separa la schermata
    cls();

    // Output di tabellone e giocatore
    showSquares();
    cout << "Turno di " << players[currPlayer]->getName()
         << " - Giocatore " << currPlayer + 1
         << " - Casella corrente: " << players[currPlayer]->getPos() << endl;
    pause();

    // Se il giocatore non deve saltare il turno, tira il dado ed esegue la mossa
    if (players[currPlayer]->isBlocked()) {
        cout << "Salta il turno" << endl;
        pause();
    } else {
        throwDice();
    }

    // Prossimo giocatore
    currPlayer = nextPlayer();
}

// Simula il tiro di due dadi da 6 facce e muove il giocatore
void Game::throwDice() {
    int score = rand() % 6 + 1;
    score += rand() % 6 + 1;

    cout << "Hai fatto " << score << endl;

    movePlayer(score);
}

// Esegue l'operazione della casella su cui è il giocatore al momento
void Game::executeSquare() {
    squares[players[currPlayer]->getPos()]->effect(this);
}

// Restituisce il giocatore successivo
int Game::nextPlayer() {
    if (currPlayer == numPlayers - 1) {
        return 0;
    }

    return currPlayer + 1;
}

// Restituisce il giocatore precedente
int Game::prevPlayer() {
    if (currPlayer == 0) {
        return numPlayers - 1;
    }

    return currPlayer - 1;
}

// Sposta il giocatore ed esegue la nuova casella
void Game::movePlayer(int movement) {

    // Calcola nuova posizione (se < 0 -> 0, se >= numSquares -> torna indietro
    int newPos = players[currPlayer]->getPos() + movement;

    if (newPos >= numSquares) {
        newPos = (numSquares - 1)  * 2 - newPos;
    }
    if (newPos < 0) {
        newPos = 0;
    }

    players[currPlayer]->setPos(newPos);

    // Output casella corrente
    cout << "Casella " << players[currPlayer]->getPos() << ": "
         << squares[players[currPlayer]->getPos()]->getMessage() << endl;

    pause();

    // Esecuzione operazione
    executeSquare();
}

// Pesca una carta
void Game::drawCard() {
    executeCard(deck->drawCard());
}

// Stampa ed esegue operazione della carta
void Game::executeCard(Card* card) {
    cout << "Carta: " << card->getMessage() << endl;

    pause();

    card->effetto(this);
}

// Salta n turni
void Game::missTurn(int turns) {
    players[currPlayer]->setNumTurns(turns);
}

// Torna alla partenza
void Game::backStart() {
    players[currPlayer]->setPos(0);
}

// Tira ancora
void Game::throwAgain() {
    throwDice();
}

// Cambia la posizione del giocatore attuale con quello precedente
void Game::switchPosition() {
    // Se il giocatore è da solo, non fare niente
    if (numPlayers < 2) {
        return;
    }

    int posPlayer = players[currPlayer]->getPos();
    int posPlayer2 = players[nextPlayer()]->getPos();
    players[currPlayer]->setPos(posPlayer2);
    players[nextPlayer()]->setPos(posPlayer);

    executeSquare();
}

// Casella arrivo
void Game::finish() {
    isFinish = true;
}

// Output tabellone su N_COLUMNS colonne
void Game::showSquares() {

    char s[50];
    char c[50];
    c[0] = '\0';

    int r = (numSquares % N_COLUMNS == 0) ? 0 : 1;
    int n = numSquares / N_COLUMNS + r;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < N_COLUMNS; j++) {
            int pos = i + j * n;
            if (pos >= numSquares) {
                continue;
            }

            print_color(s, squares[pos]->getMessage(), squares[pos]->getColor());
            show_players_position(c,pos,players,numPlayers);

            cout << (j > 0 ? "| " : "");
            cout << right << setfill(' ') << setw(numPlayers) << c;
            cout << right << setw(2) << pos << '.' << left << setfill(' ') << setw(W_COLUMN) << s;

            c[0] = '\0';
        }
        cout << endl;
    }
}

// Output fine gioco
void Game::showEnd() {

    currPlayer = prevPlayer();

    cls();
    showSquares();
    cout << endl;

    for (int i = 0; i < numPlayers; ++i) {
        cout << "Giocatore " << i+1 << ". " << players[i]->getName()
             << " - Casella " << players[i]->getPos() << endl;
    }

    cout << endl << "Vince il giocatore " << currPlayer+1 << ". " << players[currPlayer]->getName() << endl << endl;
    cout << "Bye bye" << endl;
}
