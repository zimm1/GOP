//
// Created by notty on 16/01/2018.
//

#include <string.h>
#include "color.h"

Color::Color() {
    this->list = NULL;
}

Color::Color(const char* name_player) {
    this->list = NULL;
    add_player(name_player);
}

void Color::add_player(const char* name_player) {
    srand((unsigned)time(nullptr));
    //le costanti dei colori vanno dall'intervallo 0 a 5
    int num = rand()%6;
    while(exist_color(num))
        num = rand()%6;
    //inserimento in testa
    ptr_list_player new_head = new list_color_players;
    new_head->player = new colorPlayer;
    //alloco a name player la dimensione massima che il nome può avere
    new_head->player->name_player = (char*)malloc(max_length);
    strcpy(new_head->player->name_player,name_player);
    new_head->player->color = static_cast<color>(num);
    new_head->next = this->list;
    //aggiorno la testa
    this->list = new_head;
}

//\033[x;ym
//\033 escape sequence per indicare al terminare di utilizzare la squenza ANSI.
//x indica che non utilizzeremo sfumature dei colori (dark or gray).
//y indica il numero di colore
//m escape sequence dei colori richiede il carattere 'm' in minuscolo alla fine della sequenza.

const char *Color::getReset() {
    return &("\033[0m"[0]);
}

const char *Color::getRed() {
    return &("\033[0;31m"[0]);
}

const char *Color::getGreen() {
    return &("\033[0;32m"[0]);
}

const char *Color::getBlue() {
    return &("\033[0;34m"[0]);
}

const char *Color::getYellow() {
    return &("\033[0;33m"[0]);
}

const char *Color::getMagenta() {
    return &("\033[0;35m"[0]);
}

const char *Color::getCyan() {
    return  &("\033[0;36m"[0]);
}

const char *Color::get_player_color(const char *name_player) {
    ptr_list_player itr = this->list;
    bool found = false;
    color c;
    //inizializzo il colore
    c = color::red;
    //cerco il colore del giocatore cercato
    while(itr != NULL && !found){
        if(strcmp(itr->player->name_player,name_player) == 0){
            found = true;
            c = itr->player->color;
        }
        itr = itr->next;
    }

    //in base al colore che il giocatore aveva ritorno il codeice del colore relativo.
    switch (c){
        case color::red:
            return getRed();
        case color::blue:
            return getBlue();
        case color::cyan:
            return getCyan();
        case color::green:
            return getGreen();
        case color::magenta:
            return getMagenta();
        case color::yellow:
            return getYellow();
        default:
            return getReset();
    }
}

bool Color::exist_color(int num) {
    if(list == NULL)
        return false;
    else{
        ptr_list_player itr = list;
        bool exist = false;
        while(itr != NULL && !exist){
            int t = itr->player->color;
            if(t == num)
                exist = true;
            itr = itr->next;
        }
        return exist;
    }
}
/*
 * la "stringa" player_name_color_reset è composta da tre "sottostringhe":
 * 1 - il codice ANSI del colore del Giocatore cercato
 * 2 - il nome del giocatore
 * 3 - il codice ANSI di reset (ripristina il colore di deafult)
*/

const char *Color::get_player_name_with_color(const char *name_player) {
    char* player_name_color_reset = (char*)malloc(max_length);
    strcpy(player_name_color_reset,get_player_color(name_player));
    strcat(player_name_color_reset,name_player);
    strcat(player_name_color_reset,getReset());
    return player_name_color_reset;
}
