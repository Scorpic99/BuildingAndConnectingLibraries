#include "Quadrilateral.h"

std::string Quadrilateral::get_name() {
	return name;
}
int Quadrilateral::get_sides() {
	return sides;
}
Quadrilateral::Quadrilateral() {
	sides = 4;
	name = "Четырехугольник";
}
