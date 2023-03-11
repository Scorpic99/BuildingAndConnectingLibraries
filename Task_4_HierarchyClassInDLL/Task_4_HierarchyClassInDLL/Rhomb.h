#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Rhomb : public Quadrilateral {//ромб
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API Rhomb(int a, int b, int c, int d, int A, int B);
};