#include <iostream>
#include "Complex.h"
int main()
{
	setlocale(LC_ALL, "RUS");
	Complex a{ 6,-10 };
	Complex b{ 4,-8 };
	cout << "сумма: ";
	sum(a, b);
	cout << "разность: ";
	difference(a, b);
	cout << "произведение: ";
	multiplication(a, b);
	cout << "частное: ";
	division(a, b);
	abs(a, b);
	reading("C:\Users\sasha\source\repos\Complex\Complex\complex.txt");
}