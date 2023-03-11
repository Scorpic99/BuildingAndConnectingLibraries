#pragma once
#include <iostream>
#include "Triangle.h"

class EquilateralTriangle : public Triangle {//равносторонний треугольник
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API EquilateralTriangle(int side);
};
