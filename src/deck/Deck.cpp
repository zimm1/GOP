//
// Created by Keans on 12/01/2018.
//

#include "Deck.h"
#include "../cards/Card.h"
#include "../cards/SwitchPosition.h"
#include "../cards/ThrowAgain.h"
#include "../cards/GoBack.h"
#include "../cards/GoAhead.h"
#include "../cards/QuestionCard.h"


Card* Deck::drawCard() {
    int numR = (rand() % 100);

    if (numR < 20)
        return new SwitchPosition();
    if (numR < 40)
        return new ThrowAgain();
    /* if (numR < 70)
        return new GoBack();

    return new GoAhead(); */

    return new QuestionCard();
}

