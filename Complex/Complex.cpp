#include "Complex.h"
#include <math.h>
#include <fstream>

void Complex::sum(Complex n1)
{
	string sign = (n1.im + this->im < 0) ? "" : "+";
	cout << n1.re + this->re
		<< sign <<  n1.im + this->im<<"i" << endl;
}

void Complex::difference(Complex n1)
{
	string sign = (n1.re - this->re < 0) ? "i" : "i +";
	cout << n1.im - this->im
		<< sign << n1.re - this->re << endl;
}
void Complex::multiplication(Complex n1)
{
	string sign = (n1.re * this->im + n1.im * this->re < 0) ? "" : "+";
	cout << n1.re* this->re - n1.im * this->im
		<< sign << n1.re * this->im + n1.im * this->re << "i" << endl;
}
void Complex::division(Complex n1)
{
	string sign = (((n1.re * this->im - n1.im * this->re) / (pow(this->re, 2) + pow(this->im, 2))) < 0) ? "" : "+";
	cout << ((n1.re * this->re + n1.im * this->im) / (pow(this->re, 2) + pow(this->im, 2)))
		<< sign << ((n1.re * this->im - n1.im * this->re) / (pow(this->re, 2) + pow(this->im, 2)))
		<< "i" << endl;
}
void Complex::abs(Complex n1)
{
	cout << "Модуль первого комплексного числа: " << sqrt(pow(n1.re, 2) + pow(n1.im, 2)) 
		<< " Модуль второго комплексного числа: "<< sqrt(pow(this->re, 2) + pow(this->im, 2)) << endl;
}

void reading(const char* path) 
{
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