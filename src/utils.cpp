//
// Created by cavaz on 12/01/2018.
//

#include <cstdio>
#include "utils.h"


char *my_itoa(int num, char *str) {
    if(str == nullptr) {
        return nullptr;
    }
    sprintf(str, "%d", num);
    return str;
}