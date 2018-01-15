//
// Created by Keans on 11/01/2018.
//

#include <cstring>
#include "Player.h"

Player::Player(char name[50], int pos) {
    strcpy(this->name, name);
    setPos(pos);
    setNumTurns(0);
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
