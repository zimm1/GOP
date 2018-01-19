//
// Created by Keans on 11/01/2018.
//

#include <cstring>
#include "Player.h"

Player::Player(char name[50],int pos_player) {
    strcpy(this->name, name);
    setPos(0);
    setNumTurns(0);
    add_color(pos_player);
}

/*
 * la "stringa" player_name_color_reset è composta da tre "sottostringhe":
 * 1 - il codice ANSI del colore del Giocatore cercato
 * 2 - il nome del giocatore
 * 3 - il codice ANSI di reset (ripristina il colore di deafult)
*/

const char *Player::getName() const {
    char* player_name_color_reset = (char*)malloc(max_length);
    strcpy(player_name_color_reset,getColor(this->color));
    strcat(player_name_color_reset,this->name);
    strcat(player_name_color_reset,getReset());
    return player_name_color_reset;
}

int Player::getPos() const {
    return pos;
}

void Player::setPos(int pos) {
    Player::pos = pos;
}

void Player::setNumTurns(int numTurns) {
    this->numTurns = numTurns;
}

int Player::getNumTurns() {
    return this->numTurns;
}

bool Player::isBlocked() {
    bool blocked =  this->numTurns != 0;
    if(blocked)
        decNumTurns();
    return blocked;
}

void Player::decNumTurns() {
    this->numTurns--;
}

void Player::add_color(int pos) {
    this->color = static_cast<Color>(pos);
}
