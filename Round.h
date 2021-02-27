//
// Created by Никита Тоглохинов on 23.02.2021.
//

#ifndef MAIN_TASK_ROUND_H
#define MAIN_TASK_ROUND_H

#include "Figure.h"
#include <cmath>

class Round: public Figure {
public:
    explicit Round(double r);
    double P() const override;
    double S() const override;
    int angles() const override;
private:
    double r;
    static double pi();
};


#endif //MAIN_TASK_ROUND_H
