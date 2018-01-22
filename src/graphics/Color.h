//
// Created by notty on 16/01/2018.
//

#ifndef GOP_COLOR_H
#define GOP_COLOR_H

#include <iostream>

using namespace std;

const int max_length = 100;

enum Color {red =0,green=1,blue=2,yellow=3,magenta=4,cyan=5,white=6};

const char* getRed();
const char* getGreen();
const char* getBlue();
const char* getYellow();
const char* getMagenta();
const char* getCyan();
const char* getReset();
const char* getColor(Color c);
void print_color(const char* s,Color c);

#endif //GOP_COLOR_H
