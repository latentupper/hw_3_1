//
// Created by Никита Тоглохинов on 21.02.2021.
//

#ifndef MAIN_TASK_SQUARE_H
#define MAIN_TASK_SQUARE_H

#include "Figure.h"


class Square: public Figure {
public:
    explicit Square(double a);
    double P() override;
    double S() override;
    int angles() override;
private:
    double a;
};


#endif //MAIN_TASK_SQUARE_H
