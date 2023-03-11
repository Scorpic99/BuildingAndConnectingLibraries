#include "Triangle.h"

std::string Triangle::get_name() {
	return name;
}
int Triangle::get_sides() {
	return sides;
}
Triangle::Triangle() {
	sides = 3;
	name = "Треугольник";
}
