//
// Created by notty on 11/01/2018.
//

#include "GoAhead.h"

GoAhead::GoAhead() : Cards(){
    setMessage(this->text);
    srand(time(0));
    this->value = rand()%5 + 1;
}

void GoAhead::effetto() {}
