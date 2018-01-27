//
// Created by notty on 11/01/2018.
//

#include "GoAheadCard.h"

GoAhead::GoAhead() : Card(){
    strcpy(this->text,"Vai avanti di x caselly");
    setMessage(this->text);

    //genera numeri casuali da 1 a 5
    setValue((rand()%5)+1);
}

void GoAhead::setValue(int value) {
    this->value = value;
}

int GoAhead::getValue() {
    return this->value;
}

char* GoAhead::getMessage() {
    char v[pos_char];
    my_itoa(this->value,v);
    //sostituisco al carattere x il numero di caselle da avanzare
    my_replace(this->text,'x',v[0]);
    //sostituisce y con a se il numero è uguale a 1 (singolare) altrimenti sostituisce y con e
    my_replace(this->text,'y',(this->value == 1) ? 'a' : 'e');
    return this->text;
}

void GoAhead::effetto(Game* game) {
    game->movePlayer(this->value);
}