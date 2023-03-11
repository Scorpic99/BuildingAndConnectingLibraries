#pragma once
#include <iostream>
#include "Triangle.h"

class RectangularTriangle : public Triangle {//прямоугольный треугольник
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API RectangularTriangle(int a, int b, int c, int A, int B);
};
