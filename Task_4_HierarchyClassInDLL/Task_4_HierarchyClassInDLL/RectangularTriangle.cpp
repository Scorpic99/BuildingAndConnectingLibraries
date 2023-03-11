#include "RectangularTriangle.h"

void RectangularTriangle::printFigure() {
	std::cout << name << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}
RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) {
	C = 90;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->name = "Прямоугольный треугольник";
}