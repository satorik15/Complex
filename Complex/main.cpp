#include <iostream>
#include "Complex.h"
int main()
{
	setlocale(LC_ALL, "RUS");
	Complex a{ 6,-10 };
	Complex b{ 4,-8 };
	cout << "сумма: ";
	a.sum(b);
	cout << "разность: ";
	a.difference(b);
	cout << "произведение: ";
	a.multiplication(b);
	cout << "частное: ";
	a.division(b);
	a.abs(b);
	reading("C:\Users\sasha\source\repos\Complex\Complex\complex.txt");
}