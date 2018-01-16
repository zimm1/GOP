//
// Created by notty on 11/01/2018.
//

#ifndef GOP_THROWAGAIN_H
#define GOP_THROWAGAIN_H


#include "Cards.h"

class ThrowAgain : public Cards {

    private:
        string text = "Tira Ancora";
    public:
        ThrowAgain();
        void effetto(Game* game);
};

#endif //GOP_THROWAGAIN_H
