//
// Created by Keans on 12/01/2018.
//

#include "Deck.h"



Cards Deck::drawCard() {
    deck dk;
    int numR = (rand() % 100);
       if (numR >= 0 && numR <=19){
           cout<< "Switch position";
           return dk.sp;
       }
    if (numR >=20  && numR <=39){
        cout<< "Throw again";
        return dk.ta;
    }
    if (numR >= 40 && numR <=69){
        cout<< "Go back";
        return dk.gb;
    }
    if (numR >= 70 && numR <=99){
        cout<< "Go ahead";
        return dk.ga;
    }
}

