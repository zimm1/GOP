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