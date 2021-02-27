//
// Created by Никита Тоглохинов on 21.02.2021.
//

#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}

double Rectangle::P() const {
    return 2*(a+b);
}

double Rectangle::S() const {
    return a*b;
}

int Rectangle::angles() const {
    if(a*b == 0) {
        return 0;
    } else return 4;
}