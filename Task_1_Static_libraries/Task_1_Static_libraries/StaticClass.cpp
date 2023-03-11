#include <iostream>
#include <Windows.h>

class Greeter {
public:
	std::string greet(std::string name) {
		return "Здравствуйте, " + name + "!";
	}
};


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
