//
// Created by cavaz on 12/01/2018.
//

#include <cstdio>
#include <iostream>
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

// Premere invio per continuare
void pause() {
    cin.clear();
    cin.ignore(10000, '\n');
    cin.putback('\n');
    cin.get();
}

// Numero successivo da 1 a 6
int next1to6(int i) {
    bool neg = i < 0;
    i = abs(i);

    i = (i == 6) ? 1 : ++i;

    return ((neg) ? (-1 * i) : i);
}