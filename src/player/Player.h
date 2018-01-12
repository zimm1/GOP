//
// Created by Keans on 11/01/2018.
//

#ifndef GOP_PLAYER_H
#define GOP_PLAYER_H


class Player {
private:
    char name[50];
    int pos;

public:

    Player(char name[50], int pos);

    const char *getName() const;

    int getPos() const;

    void setPos(int pos);

    void move(int score);

};



#endif //GOP_PLAYER_H
