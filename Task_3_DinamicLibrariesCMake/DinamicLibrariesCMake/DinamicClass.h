#pragma once
//#ifdef DINAMICLIBARIESCMAKE_EXPORTS
//#define DINAMICLIBARIESCMAKE_API __declspec(dllexport)
//#else
//#define DINAMICLIBARIESCMAKE_API __declspec(dllimport)
//#endif

#include <iostream>

class Greeter {
public:
	std::string greet(std::string name);
	void EnterName();
};
