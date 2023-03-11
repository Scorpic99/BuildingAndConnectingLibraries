#include "Shapes.h"


std::string Shapes::get_name() {
	return name;
}
int Shapes::get_sides() {
	return sides;
}
Shapes::Shapes() {
	sides = 0;
	name = "Фигура";
}
void Shapes::printFigure() {
	std::cout << name << ":" << std::endl;
}
