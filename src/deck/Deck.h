//
// Created by Keans on 12/01/2018.
//

#ifndef GOP_DECK_H
#define GOP_DECK_H

#include <string>
#include <iostream>
#include <ctime>
class Card;

using namespace std;

class Deck {
public:
    Card* drawCard();
};


#endif //GOP_DECK_H
