//
// Created by notty on 11/01/2018.
//


#include "GoBackCard.h"

GoBack::GoBack() : Card(){
    strcpy(this->text,"Torna indietro di x caselly");
    setMessage(this->text);

    //genera numeri negativi da -5 a -1
    setValue((rand()%5+1)*(-1));
}

int GoBack::getValue() {
    return this->value;
}

void GoBack::setValue(int value){
    this->value = value;
}

char* GoBack::getMessage(){
    char v[neg_char];
    //se il il valore è minore moltiplica per -1 per togliere il segno '-'
    my_itoa((this->value > 0) ? this->value : (this->value)*(-1),v);
    //sostituisce il carattere 'x' con il numero di caselle da indietreggiare
    my_replace(this->text,'x',v[0]);
    //sostituisce il carattere 'y' con 'a' se il numero è uguale a 1 (singolare) altrimenti sostituisce 'y' con 'e'
    my_replace(this->text,'y',((this->value)*(-1) == 1) ? 'a' : 'e');
    return this->text;
}

void GoBack::effetto(Game* game) {
    game->movePlayer(this->value);
}