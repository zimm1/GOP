//
// Created by cavaz on 17/01/2018.
//

#ifndef GOP_QUESTIONCARD_H
#define GOP_QUESTIONCARD_H


#include "Card.h"

class QuestionCard : public Card {
    private:
        char text[max_length];
    public:
        QuestionCard();
        void effetto(Game* game) override;
};


#endif //GOP_QUESTIONCARD_H
