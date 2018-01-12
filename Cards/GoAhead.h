//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOAHEAD_H
#define GOP_GOAHEAD_H


#include "Cards.h"

class GoAhead : public Cards{
    private:
        string text = "Vai avanti di n passi!";
    public:
        GoAhead();
        void effetto();
};


#endif //GOP_GOAHEAD_H
