#pragma once

#include <iostream>
#include "Macros.h"

class Shapes {
public:
    HIERARCHYCLASSINDLL_API virtual std::string get_name();
    HIERARCHYCLASSINDLL_API virtual int get_sides();
    HIERARCHYCLASSINDLL_API Shapes();
    HIERARCHYCLASSINDLL_API virtual void printFigure();
protected:
    std::string name;
    int sides;
};
