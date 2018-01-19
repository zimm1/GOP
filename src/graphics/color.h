//
// Created by notty on 16/01/2018.
//

#ifndef GOP_COLOR_H
#define GOP_COLOR_H

#include <iostream>

using namespace std;

const int max_length = 100;

enum color {red =0,green=1,blue=2,yellow=3,magenta=4,cyan=5};

struct colorPlayer{
    char* name_player;
    color color;
};

struct list_color_players{
    colorPlayer* player;
    list_color_players *next;
};

typedef list_color_players *ptr_list_player;

class Color {
private:
    ptr_list_player list;
    const char* getRed();
    const char* getGreen();
    const char* getBlue();
    const char* getYellow();
    const char* getMagenta();
    const char* getCyan();
    bool exist_color(int num);
    const char* get_player_color(const char* name_player);
    const char* getReset();
public:
    Color();
    Color(const char* name_player);
    void add_player(const char* name_player);
    const char* get_player_name_with_color(const char* name_player);
};

#endif //GOP_COLOR_H
