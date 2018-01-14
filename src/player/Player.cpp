//
// Created by Keans on 11/01/2018.
//

#include <cstring>
#include "Player.h"

Player::Player(char name[50], int pos) {
    strcpy(this->name, name);
    setPos(pos);
}

const char *Player::getName() const {
    return name;
}

int Player::getPos() const {
    return pos;
}

void Player::setPos(int pos) {
    Player::pos = pos;
}
void Player::move(int score){
    this->pos += score;
}
