//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOAHEAD_H
#define GOP_GOAHEAD_H


#include "Cards.h"

class GoAhead : public Cards{
    private:
        string text = "Vai avanti di x caselly";
    public:
        GoAhead();
        void effetto(Game* game);
};


#endif //GOP_GOAHEAD_H
