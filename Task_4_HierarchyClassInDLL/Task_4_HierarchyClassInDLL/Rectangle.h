#pragma once
#include <iostream>
#include "Quadrilateral.h"


class Rectangle : public Quadrilateral {//прямоугольник
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API Rectangle(int oneSide, int twoSide);
};
