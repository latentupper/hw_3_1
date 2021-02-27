#ifndef MAIN_TASK_FIGURE_H
#define MAIN_TASK_FIGURE_H


class Figure {
public:
    virtual double P() const = 0;
    virtual double S() const = 0;
    virtual int angles() const = 0;
};

#endif //MAIN_TASK_FIGURE_H
