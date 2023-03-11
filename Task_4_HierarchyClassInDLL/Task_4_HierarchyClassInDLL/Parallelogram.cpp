#include "Parallelogram.h"

void Parallelogram::printFigure() {
	std::cout << name << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
Parallelogram::Parallelogram(int a, int b, int A, int B) {
	this->a = a;
	this->b = b;
	this->c = a;
	this->d = b;
	this->A = A;
	this->B = B;
	this->C = A;
	this->D = B;
	name = "Параллелограмм";
}