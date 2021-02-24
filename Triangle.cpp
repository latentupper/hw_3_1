//
// Created by Никита Тоглохинов on 23.02.2021.
//

#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {
    if(NotExists()) {
        std::cout << "THIS TRIANGLE CAN'T BE CONSTRUCTED" << std::endl;
    }
    if(IsDegenerated()) {
        std::cout << "WARNING: THIS TRIANGLE IS DEGENERATED" << std::endl;
    }
}

Triangle::Triangle(double a) : a(a), b(a), c(a) { }

double Triangle::P() {
    if(!NotExists()) {
        return a+b+c;
    } else return -1; //типа ошибка, несуществующи треугольник
}

double Triangle::S() {
    double p = (a+b+c)/2;
    if(!NotExists()) {
        if(IsDegenerated()) {
            return 0;
        } else return sqrt(p * (p-a) * (p-b) * (p-c));
    } else return -1;
}

int Triangle::angles() {
    if(!NotExists()) {
        if(IsDegenerated()) {
            return 0;
        } else return 3;
    } else return -1;
}

bool Triangle::NotExists() const {
    if( (a > b+c) || (b > a+c) || (c > a+b) ) {
        return true;
    } else return false;
}

bool Triangle::IsDegenerated() const {
    if( (a == b+c) || (b == a+c) || (c == a+b) ) {
        return true;
    } else return false;
}