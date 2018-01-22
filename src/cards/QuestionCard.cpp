//
// Created by cavaz on 17/01/2018.
//

#include "QuestionCard.h"
#include "../questions.h"
#include "GoAhead.h"
#include "GoBack.h"

QuestionCard::QuestionCard() {
    setMessage("Domanda:");
}

void QuestionCard::effetto(Game *game) {
    getQuestionResult() ? game->executeCard(new GoAhead()) : game->executeCard(new GoBack());
}
