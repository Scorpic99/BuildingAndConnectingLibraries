#include <iostream>
#include "../Task_4_HierarchyClassInDLL/Shapes.h"
#include "../Task_4_HierarchyClassInDLL/Triangle.h"
#include "../Task_4_HierarchyClassInDLL/RectangularTriangle.h"
#include "../Task_4_HierarchyClassInDLL/IsoscelesTriangle.h"
#include "../Task_4_HierarchyClassInDLL/EquilateralTriangle.h"
#include "../Task_4_HierarchyClassInDLL/Quadrilateral.h"
#include "../Task_4_HierarchyClassInDLL/Square.h"
#include "../Task_4_HierarchyClassInDLL/Rectangle.h"
#include "../Task_4_HierarchyClassInDLL/Parallelogram.h"
#include "../Task_4_HierarchyClassInDLL/Rhomb.h"


void print_shapes(Shapes* shapes) {
    int a = 6, b = 26, c = 64, A = 7, B = 340, C = 45;

    RectangularTriangle objRT(a, b, c, A, B);
    shapes = &objRT;
    shapes->printFigure();
    IsoscelesTriangle objIT(a, b, 3, 3, 3);
    shapes = &objIT;
    shapes->printFigure();
    EquilateralTriangle objET(61);
    shapes = &objET;
    shapes->printFigure();
    Rectangle objRec(2, 2);
    shapes = &objRec;
    shapes->printFigure();
    Square objSqu(5);
    shapes = &objSqu;
    shapes->printFigure();
    Parallelogram objPar(3, 45, 6, 45);
    shapes = &objPar;
    shapes->printFigure();
    Rhomb objRmb(a, b, c, 9, 55, 66);
    shapes = &objRmb;
    shapes->printFigure();

}


int main()
{
    setlocale(LC_ALL, "Rus");

    Shapes* shapes = new Shapes;
    Triangle triangle;
    Quadrilateral quadrilateral;

    print_shapes(shapes);

}
