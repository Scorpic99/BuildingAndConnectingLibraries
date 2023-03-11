#pragma once
#ifdef DINAMICLIBARIESCMAKE_EXPORTS
#define DINAMICLIBARIESCMAKE_API __declspec(dllexport)
#else
#define DINAMICLIBARIESCMAKE_API __declspec(dllimport)
#endif

#include <iostream>

class Greeter {
public:
	DINAMICLIBARIESCMAKE_API std::string greet(std::string name);
	DINAMICLIBARIESCMAKE_API void EnterName();
};
