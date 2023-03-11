#pragma once
#ifdef HIERARCHYCLASSINDLL_EXPORTS
#define HIERARCHYCLASSINDLL_API __declspec(dllexport)
#else
#define HIERARCHYCLASSINDLL_API __declspec(dllimport)
#endif

#include <iostream>

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
