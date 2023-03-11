#include "Rectangle.h"

void Rectangle::printFigure() {
	std::cout << name << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
Rectangle::Rectangle(int oneSide, int twoSide) {
	a = oneSide;
	b = twoSide;
	c = oneSide;
	d = twoSide;
	A = 90; B = 90; D = 90; C = 90;
	name = "Прямоугольник";
}