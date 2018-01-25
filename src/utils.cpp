//
// Created by cavaz on 12/01/2018.
//

#include <cstdio>
#include <iostream>
#include <cstring>
#include "utils.h"


using namespace std;

// Implementazione di int to string
char *my_itoa(int num, char *str) {
    if(str == nullptr) {
        return nullptr;
    }
    sprintf(str, "%d", num);
    return str;
}

// Svuota schermo
void cls() {
    //for (int i = 0; i < 10; ++i) printf( "\n\n\n\n\n\n\n\n\n\n" );
    for (int i = 0; i < 150; ++i) {
        cout << "-";
    }
    cout << endl;
}

void clearCin() {
    cin.clear();
    cin.ignore(10000, '\n');
}

// Premere invio per continuare
void pause() {
    clearCin();
    cin.putback('\n');
    cin.get();
}

void show_players_position(char* c,const int pos,Player* players[],const int numPlayers) {
    for (int i = 0; i < numPlayers; i++) {
        if (players[i]->getPos() == pos) {
            if (c[0] == '\0') {
                print_color(c, "*", players[i]->getColorPlayer());
            } else {
                add_color(c, "*", players[i]->getColorPlayer());
            }
        } else if (c[0] == '\0') {
            print_color(c, " ", players[i]->getColorPlayer());
        } else {
            add_color(c, " ", players[i]->getColorPlayer());
        }
    }
}

// Numero successivo da 1 a 6
int next1to6(int i) {
    bool neg = i < 0;
    i = abs(i);

    i = (i == 6) ? 1 : ++i;

    return ((neg) ? (-1 * i) : i);
}