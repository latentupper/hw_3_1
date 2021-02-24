//
// Created by Никита Тоглохинов on 23.02.2021.
//

#include "Round.h"

Round::Round(double r) : r(r) {}

double Round::P() {
    return 2*pi()*r;
}

double Round::S() {
    return pi()*r*r;
}

int Round::angles() {
    return 0;
}

double Round::pi() {
    return std::acos(-1);
}