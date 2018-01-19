//
// Created by notty on 16/01/2018.
//

#include "Color.h"

//\033[x;ym
//\033 escape sequence per indicare al terminare di utilizzare la squenza ANSI.
//x indica che non utilizzeremo sfumature dei colori (dark or gray).
//y indica il numero di colore
//m escape sequence dei colori richiede il carattere 'm' in minuscolo alla fine della sequenza.

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

const char* getColor(Color c){
    //in base al colore che il giocatore aveva ritorno il codeice del colore relativo.
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
        default:
            return getReset();
    }
}

