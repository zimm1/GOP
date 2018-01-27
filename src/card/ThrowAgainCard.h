//
// Created by notty on 11/01/2018.
//

#ifndef GOP_THROWAGAIN_H
#define GOP_THROWAGAIN_H


#include "Card.h"

class ThrowAgain : public Card {

    private:
        char text[max_length];
    public:
        ThrowAgain();
        void effetto(Game* game);
};

#endif //GOP_THROWAGAIN_H
