#pragma once
#ifdef HIERARCHYCLASSINDLL_EXPORTS
#define HIERARCHYCLASSINDLL_API __declspec(dllexport)
#else
#define HIERARCHYCLASSINDLL_API __declspec(dllimport)
#endif
