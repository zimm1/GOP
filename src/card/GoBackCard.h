//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOBACK_H
#define GOP_GOBACK_H


#include "Card.h"

class GoBack : public Card{

    private:
        string text = "Torna indietro di  caselly";
        int value;
    public:
        GoBack();
        void setValue(int value);
        int getValue();
        string getMessage();
        void effetto(Game* game);

};


#endif //GOP_GOBACK_H
