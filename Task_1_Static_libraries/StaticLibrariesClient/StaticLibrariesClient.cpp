#include <iostream>
#include "..\Task_1_Static_libraries\StaticClass.h"


int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string myName;
	Greeter greeter;
	std::cout << "Введите совое имя: ";
	std::cin >> myName;
	std::cout << greeter.greet(myName) << std::endl;

}