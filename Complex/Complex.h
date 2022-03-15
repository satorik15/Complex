#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <fstream>
using namespace std;
struct Complex
{
	double im = 0;
	double re = 0;
};
void sum(Complex n1, Complex n2);
void difference(Complex n1, Complex n2);
void multiplication(Complex n1, Complex n2);
void division(Complex n1, Complex n2);
void abs(Complex n1, Complex n2);
void reading(const char* path);
#endif