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
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}

// Premere invio per continuare
void pause() {
    cin.clear();
    cin.ignore(10000, '\n');
    cin.putback('\n');
    cin.get();
}

void show_players_position(char* c,const int pos,Player* players[],const int numPlayers){
    for(int i = 0; i < numPlayers;i++)
        if(players[i]->getPos() == pos){
            if(c[0] == '\0')
                print_color(c, "*",players[i]->getColorPlayer());
            else
                add_color(c,"*",players[i]->getColorPlayer());
        } else if(c[0] == '\0')
            print_color(c, " ",players[i]->getColorPlayer());
        else
            add_color(c," ",players[i]->getColorPlayer());
}