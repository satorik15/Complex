#include <iostream>
#include "Complex.h"
int main()
{
	setlocale(LC_ALL, "RUS");
	Complex a{ 6,-10 };
	Complex b{ 4,-8 };
	cout << "�����: ";
	sum(a, b);
	cout << "��������: ";
	difference(a, b);
	cout << "������������: ";
	multiplication(a, b);
	cout << "�������: ";
	division(a, b);
	abs(a, b);
	reading("C:\Users\sasha\source\repos\Complex\Complex\complex.txt");
}