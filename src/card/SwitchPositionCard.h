//
// Created by notty on 11/01/2018.
//

#ifndef GOP_SWITCHPOSITION_H
#define GOP_SWITCHPOSITION_H


#include "Card.h"

class SwitchPosition : public Card {

    private:
        char text[max_length];

    public:
        SwitchPosition();
        void effetto(Game* game);
};


#endif //GOP_SWITCHPOSITION_H
