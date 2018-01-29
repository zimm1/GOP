//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOBACK_H
#define GOP_GOBACK_H


#include "Card.h"

#define neg_char 2

class GoBack : public Card{

    private:
        char text[max_length];
        int value;
    public:
        GoBack();
        void setValue(int value);
        int getValue();
        char* getMessage();
        void effetto(Game* game);

};


#endif //GOP_GOBACK_H
