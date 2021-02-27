//
// Created by Никита Тоглохинов on 23.02.2021.
//

#ifndef MAIN_TASK_ELLIPSE_H
#define MAIN_TASK_ELLIPSE_H

#include "Figure.h"
#include <cmath>


class Ellipse: public Figure {
public:
    explicit Ellipse(double a, double b);
    double P() const override;
    double S() const override;
    int angles() const override;
private:
    double a;
    double b;
    static double pi();
};


#endif //MAIN_TASK_ELLIPSE_H
