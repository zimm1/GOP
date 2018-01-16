//
// Created by Keans on 12/01/2018.
//

#include "Deck.h"
#include "../cards/Cards.h"
#include "../cards/SwitchPosition.h"
#include "../cards/ThrowAgain.h"
#include "../cards/GoBack.h"
#include "../cards/GoAhead.h"


Cards* Deck::drawCard() {
    srand((unsigned)time(nullptr));

    int numR = (rand() % 100);

    if (numR < 20)
        return new SwitchPosition();
    if (numR < 40)
        return new ThrowAgain();
    if (numR < 70)
        return new GoBack();

    return new GoAhead();
}

