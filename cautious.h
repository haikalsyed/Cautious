#pragma once

#ifdef WIN32
#define CON_EXPORT __declspec(dllexport)
#else
#define CON_EXPORT __declspec(dllexport)
#endif

#include <iostream>

CON_EXPORT void Display();