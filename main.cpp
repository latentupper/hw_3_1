#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Round.h"
#include "Ellipse.h"

int angles_amount(const Figure& a)
{
    return a.angles();
}

double perimeter(const Figure& a)
{
    return a.P();
}

double square(const Figure& a)
{
    return a.S();
}

int main() {
    Square a(10);
    std::cout << angles_amount(a) << std::endl;
    std::cout << perimeter(a) << std::endl;
    std::cout << square(a) << std::endl;
    Rectangle b(10, 20);
    std::cout << angles_amount(b) << std::endl;
    std::cout << perimeter(b) << std::endl;
    std::cout << square(b) << std::endl;
    Triangle c(3, 4, 5);
    std::cout << angles_amount(c) << std::endl;
    std::cout << perimeter(c) << std::endl;
    std::cout << square(c) << std::endl;
    Round d(10);
    std::cout << angles_amount(d) << std::endl;
    std::cout << perimeter(d) << std::endl;
    std::cout << square(d) << std::endl;
    Ellipse e(5, 4);
    std::cout << angles_amount(e) << std::endl;
    std::cout << perimeter(e) << std::endl;
    std::cout << square(e) << std::endl;
    return 0;
}
