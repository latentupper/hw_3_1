//
// Created by Никита Тоглохинов on 21.02.2021.
//

#ifndef MAIN_TASK_RECTANGLE_H
#define MAIN_TASK_RECTANGLE_H

#include "Figure.h"


class Rectangle: public Figure {
public:
    explicit Rectangle(double a, double b);
    double P() const override;
    double S() const override;
    int angles() const override;
private:
    double a;
    double b;
};


#endif //MAIN_TASK_RECTANGLE_H
