#include "Square.h"


void Square::printFigure() {
	std::cout << name << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
Square::Square(int side) {
	a = side;
	b = side;
	c = side;
	d = side;
	A = 90; B = 90; C = 90; D = 90;
	name = "Квадрат";
}