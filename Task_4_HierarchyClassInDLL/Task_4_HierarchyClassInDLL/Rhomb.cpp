#include "Rhomb.h"


void Rhomb::printFigure() {
	std::cout << name << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = A;
	this->D = B;
	name = "Ромб";
}
