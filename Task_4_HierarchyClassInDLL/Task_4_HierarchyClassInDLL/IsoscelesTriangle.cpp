#include "IsoscelesTriangle.h"


    void IsoscelesTriangle::printFigure() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = A;
        name = "Равнобедренный треугольник";
    }