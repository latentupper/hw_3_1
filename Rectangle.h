//
// Created by Никита Тоглохинов on 21.02.2021.
//

#ifndef MAIN_TASK_RECTANGLE_H
#define MAIN_TASK_RECTANGLE_H

#include "Figure.h"


class Rectangle: public Figure {
public:
    explicit Rectangle(double a, double b);
    double P() override;
    double S() override;
    int angles() override;
private:
    double a;
    double b;
};


#endif //MAIN_TASK_RECTANGLE_H
