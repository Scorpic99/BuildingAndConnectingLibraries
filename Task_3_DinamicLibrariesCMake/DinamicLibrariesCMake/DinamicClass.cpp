#include "DinamicClass.h"
#include "Windows.h"

std::string Greeter::greet(std::string name) {
	return "������������, " + name + "!";
}
void Greeter::EnterName() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string myName;
	Greeter greeter;
	std::cout << "������� ����� ���: ";
	std::cin >> myName;
	std::cout << greeter.greet(myName) << std::endl;
}