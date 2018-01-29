//
// Created by Keans on 12/01/2018.
//

#include "Deck.h"
#include "../card/Card.h"
#include "../card/SwitchPositionCard.h"
#include "../card/ThrowAgainCard.h"
#include "../card/QuestionCard.h"


// Estrae una carta in base a delle percentuali prestabilite
Card* Deck::drawCard() {
    int numR = (rand() % 100);

    if (numR < 20)
        return new SwitchPosition(); // Ritorna la classe SwitchPosition con una possibilità del 20%
    if (numR < 40)
        return new ThrowAgain(); // Ritorna la classe ThrowAgain con una possibilità del 20%

    return new QuestionCard(); // Ritorna la classe QuestionCard con una possibilità del 60%
}

