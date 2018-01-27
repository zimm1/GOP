//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOAHEAD_H
#define GOP_GOAHEAD_H


#include "Card.h"

class GoAhead : public Card{
    private:
        string text = "Vai avanti di  caselly";
        int value;
    public:
        GoAhead();
        string getMessage() override;
        int getValue();
        void setValue(int value);
        void effetto(Game* game) override;
};


#endif //GOP_GOAHEAD_H
