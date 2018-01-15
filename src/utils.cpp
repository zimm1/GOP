//
// Created by cavaz on 12/01/2018.
//

#include <cstdio>
#include "utils.h"

using namespace std;


char *my_itoa(int num, char *str) {
    if(str == nullptr) {
        return nullptr;
    }
    sprintf(str, "%d", num);
    return str;
}

void cls() {
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}