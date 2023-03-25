#pragma once


#include <iostream>
#include "Macros.h"
#include "Shapes.h"

class Quadrilateral : public Shapes {
public:
    HIERARCHYCLASSINDLL_API std::string get_name() override;
    HIERARCHYCLASSINDLL_API int get_sides() override;
    HIERARCHYCLASSINDLL_API Quadrilateral();

protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
};