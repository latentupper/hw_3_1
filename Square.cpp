//
// Created by Никита Тоглохинов on 21.02.2021.
//

#include "Square.h"

Square::Square(double a) : a(a) {}

double Square::P() const {
    return 4*a;
}

double Square::S() const {
    return a*a;
}

int Square::angles() const {
    if(a == 0) {
        return 0;
    } else return 4;
}