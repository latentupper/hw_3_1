//
// Created by Никита Тоглохинов on 21.02.2021.
//

#include "Square.h"

Square::Square(double a) : a(a) {}

double Square::P() {
    return 4*a;
}

double Square::S() {
    return a*a;
}

int Square::angles() {
    if(a == 0) {
        return 0;
    } else return 4;
}