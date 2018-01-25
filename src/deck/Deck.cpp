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


Card* Deck::drawCard() { //Questa funzione "estrae" una carte in base a delle percentuali stabilite.
    int numR = (rand() % 100);

    if (numR < 20)
        return new SwitchPosition(); //Ritorna la classe SwitchPosition con una possibilità del 20%
    if (numR < 40)
        return new ThrowAgain(); //Ritorna la classe ThrowAgain con una possibilità del 20%
    /* if (numR < 70)
        return new GoBack();

    return new GoAhead(); */

    return new QuestionCard(); //Ritorna la classe QuestionCard
}

