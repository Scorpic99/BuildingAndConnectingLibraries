#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Square : public Quadrilateral {//�������
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API Square(int side);
};


