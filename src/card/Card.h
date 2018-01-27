//
// Created by notty on 11/01/2018.
//

#ifndef GOP_CARDS_H
#define GOP_CARDS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <random>
#include "../game/Game.h"

using namespace std;

class Card {

    private:
        string message;
    public:
        Card();
        Card(string message);

        void setMessage(string message);
        virtual string getMessage();

        virtual void effetto(Game* game);
};


#endif //GOP_CARDS_H
