#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {//ןאנאככוכמדנאלל
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API Parallelogram(int a, int b, int A, int B);
};