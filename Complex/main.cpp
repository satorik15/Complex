#include <iostream>
#include "Complex.h"
int main()
{
	setlocale(LC_ALL, "RUS");
	Complex a{ 6,-10 };
	Complex b{ 4,-8 };
	cout << "�����: ";
	a.sum(b);
	cout << "��������: ";
	a.difference(b);
	cout << "������������: ";
	a.multiplication(b);
	cout << "�������: ";
	a.division(b);
	a.abs(b);
	reading("C:\Users\sasha\source\repos\Complex\Complex\complex.txt");
}