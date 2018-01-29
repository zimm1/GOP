//
// Created by notty on 16/01/2018.
//

#include <cstring>
#include "Color.h"

/*\033[0;ym
*\033 escape sequence (033 - ESC in Octal ASCII code).
*0 Disattiva tutti gli attributi del testo (dark or gray).
*y colore del testo.
*m carattere finale della sequenza.
*/
const char* getReset() {
    return "\033[0m";
}

const char*getRed() {
    return "\033[0;31m";
}

const char* getGreen() {
    return "\033[0;32m";
}

const char* getBlue() {
    return "\033[0;34m";
}

const char* getYellow() {
    return "\033[0;33m";
}

const char* getMagenta() {
    return "\033[0;35m";
}

const char* getCyan() {
    return "\033[0;36m";
}

const char* getWhite(){
    return "\033[0;37m";
}

const char* getColor(Color c){
    //ritorna la stringa ANSI del colore richiesto.
    switch (c){
        case Color::red:
            return getRed();
        case Color::blue:
            return getBlue();
        case Color::cyan:
            return getCyan();
        case Color::green:
            return getGreen();
        case Color::magenta:
            return getMagenta();
        case Color::yellow:
            return getYellow();
        case Color::white:
            return getWhite();
        default:
            return getReset();
    }
}

void print_color(char* dest, const char* s, Color c){
    strcpy(dest, getColor(c));
    strcat(dest, s);
    strcat(dest, getReset());
}

void add_color(char* dest, const char* s, Color c){
    strcat(dest, getColor(c));
    strcat(dest, s);
    strcat(dest, getReset());
}