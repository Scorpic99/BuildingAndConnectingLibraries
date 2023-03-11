#pragma once
#ifdef TASK2DINAMICLIBARIES_EXPORTS
#define TASK2DINAMICLIBARIES_API __declspec(dllexport)
#else
#define TASK2DINAMICLIBARIES_API __declspec(dllimport)
#endif
#include <iostream>
namespace DinamicSpace {
	class Greeter {
	public:
		TASK2DINAMICLIBARIES_API std::string greet(std::string name);
		TASK2DINAMICLIBARIES_API void EnterName();
	};

	
}
