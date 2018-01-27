//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOAHEAD_H
#define GOP_GOAHEAD_H


#include "Card.h"

#define pos_char 1

class GoAhead : public Card{
    private:
        char text[max_length];
        int value;
    public:
        GoAhead();
        char* getMessage() override;
        int getValue();
        void setValue(int value);
        void effetto(Game* game) override;
};


#endif //GOP_GOAHEAD_H
