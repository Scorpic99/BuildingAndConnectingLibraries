#pragma once
#include <iostream>
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {//�������������� �����������
public:
    HIERARCHYCLASSINDLL_API void printFigure() override;
    HIERARCHYCLASSINDLL_API IsoscelesTriangle(int a, int b, int A, int B, int C);
};