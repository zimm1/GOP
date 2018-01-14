//
// Created by notty on 11/01/2018.
//

#ifndef GOP_GOBACK_H
#define GOP_GOBACK_H


#include "Cards.h"

class GoBack : public Cards{

    private:
        string text = "Torna indietro di x caselly";
    public:
        GoBack();
        void effetto(Game* game);

};


#endif //GOP_GOBACK_H
