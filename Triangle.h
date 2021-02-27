//
// Created by Никита Тоглохинов on 23.02.2021.
//

#ifndef MAIN_TASK_TRIANGLE_H
#define MAIN_TASK_TRIANGLE_H

#include "Figure.h"
#include <cmath>
#include <iostream>

class Triangle: public Figure {
public:
    explicit Triangle(double a, double b, double c);
    explicit Triangle(double a);
    double P() const override;
    double S() const override;
    int angles() const override;
private:
    double a;
    double b;
    double c;
    bool NotExists() const;
    bool IsDegenerated() const; //вырожден ли треугольник
};


#endif //MAIN_TASK_TRIANGLE_H
