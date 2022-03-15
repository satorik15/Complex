#include "Complex.h"
#include <math.h>
#include <fstream>
void sum(Complex n1, Complex n2)
{
	string sign = (n1.im + n2.im < 0) ? "" : "+";
	cout << n1.re + n2.re
		<< sign <<  n1.im + n2.im<<"i" << endl;

}

void difference(Complex n1, Complex n2)
{
	string sign = (n1.re - n2.re < 0) ? "i" : "i +";
	cout << n1.im - n2.im
		<< sign << n1.re - n2.re << endl;
}
void multiplication(Complex n1, Complex n2)
{
	string sign = (n1.re * n2.im + n1.im * n2.re < 0) ? "" : "+";
	cout << n1.re* n2.re - n1.im * n2.im
		<< sign << n1.re * n2.im + n1.im * n2.re << "i" << endl;
}
void division(Complex n1, Complex n2)
{
	string sign = (((n1.re * n2.im - n1.im * n2.re) / (pow(n2.re, 2) + pow(n2.im, 2))) < 0) ? "" : "+";
	cout << ((n1.re * n2.re + n1.im * n2.im) / (pow(n2.re, 2) + pow(n2.im, 2)))
		<< sign << ((n1.re * n2.im - n1.im * n2.re) / (pow(n2.re, 2) + pow(n2.im, 2))) 
		<< "i" << endl;
}
void abs(Complex n1, Complex n2)
{
	cout << "Модуль первого комплексного числа: " << sqrt(pow(n1.re, 2) + pow(n1.im, 2)) 
		<< " Модуль второго комплексного числа: "<< sqrt(pow(n2.re, 2) + pow(n2.im, 2)) << endl;
}

void reading(const char* path) {
	ifstream fin("complex.txt");
		double number, max = -50000000;
		int maxIndex;
		fin >> number;//считывание количество комплексных чисел
		int n = static_cast<int>(number);//перевод первого числа в int
		cout << "Количество комплексных чисел в файле: " << n << '\n';
		Complex* p = new Complex[n];// создадим динамический массив
		for (int i = 0; i < n; i++) {//считывание файла в массив типа комплексных чисел
			fin >> number;
			p[i].re = number;
			fin >> number;
			p[i].im = number;
			if (p[i].im > 0)
			{
				cout << i + 1 << " число: " << p[i].re << "+" << p[i].im << "i\n";//вывод чисел, которые программа считала из файла с индексом

			}
			else
				cout << i + 1 << "" << " число: "  << p[i].re<< p[i].im << "i\n";
			
			if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > max)//вычисление модуля, и получение максимального модуля и его индекса (maxIndex)
			{
				max = sqrt(p[i].re * p[i].re + p[i].im * p[i].im);
				maxIndex = i;
			}
		}
		if (p[maxIndex].im < 0) {
			cout << "Комплексное число с максимальным модулем в данном файле: " << p[maxIndex].re << p[maxIndex].im <<"i\n"<< endl;
		}
		else {
			cout << "Комплексное число с максимальным модулем в данном файле: " << p[maxIndex].re << "+" << p[maxIndex].im <<"i\n" << endl;
		}
		cout << "Модуль данного числа равен: " << max;
}