#include <iostream>
#include "src/square/Square.h"
#include "src/square/MissTurnSquare.h"
#include "src/square/StartSquare.h"
#include "src/square/FinishSquare.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Square* s1 = new FinishSquare();
    s1->effect();

    return 0;
}