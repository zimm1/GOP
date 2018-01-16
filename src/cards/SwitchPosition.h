//
// Created by notty on 11/01/2018.
//

#ifndef GOP_SWITCHPOSITION_H
#define GOP_SWITCHPOSITION_H


#include "Cards.h"

class SwitchPosition : public Cards {

    private:
        string text = "Cambia posizione con il giocatore successivo";

    public:
        SwitchPosition();
        void effetto(Game* game);
};


#endif //GOP_SWITCHPOSITION_H
