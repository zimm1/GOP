//
// Created by Keans on 12/01/2018.
//

#ifndef GOP_DECK_H
#define GOP_DECK_H

#include <string>
#include <iostream>
#include <time.h>
#include "../cards/GoAhead.h"
#include "../cards/GoBack.h"
#include "../cards/ThrowAgain.h"
#include "../cards/SwitchPosition.h"

using namespace std;

class Deck {

private:


public:

    struct deck{
        GoAhead ga;
        GoBack gb;
        SwitchPosition sp;
        ThrowAgain ta;
    };

    Deck();

    Cards drawCard();

};


#endif //GOP_DECK_H
