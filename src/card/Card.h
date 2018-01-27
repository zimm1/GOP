//
// Created by notty on 11/01/2018.
//

#ifndef GOP_CARDS_H
#define GOP_CARDS_H

#include <cstring>
#include <iostream>
#include <random>
#include "../game/Game.h"
#include "../utils.h"

using namespace std;

#define max_length 50

class Card {

    private:
        char message[max_length];
    public:
        Card();
        Card(char message[max_length]);

        void setMessage(char  message[max_length]);
        virtual char* getMessage();

        virtual void effetto(Game* game);
};


#endif //GOP_CARDS_H
