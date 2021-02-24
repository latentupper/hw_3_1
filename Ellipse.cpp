//
// Created by Никита Тоглохинов on 23.02.2021.
//

#include "Ellipse.h"

Ellipse::Ellipse(double a, double b) : a(a), b(b) {}

double Ellipse::P() {
    return 4 * (pi()*a*b + (a-b)*(a-b)) / (a+b); //приближенная формула
}

double Ellipse::S() {
    return pi()*a*b;
}

int Ellipse::angles() {
    return 0;
}

double Ellipse::pi() {
    return std::acos(-1);
}