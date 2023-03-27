#include <iostream>
#include <string>
#include<windows.h>
#include "function.h"
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;

	system("chcp 1251");
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
	std::cin >> c;
	switch (c)
	{
	case 1 :
		std::cout << a << " + " << b << " = " << summ(a, b) << std::endl; break;
	case 2:
		std::cout<< a << " - " << b << " = " << sub(a, b) << std::endl; break;
	case 3 :
		std::cout << a << " * " << b << " = " << mult(a, b) << std::endl; break;
	case 4:
		std::cout << a << " / " << b << " = " << division(a, b) << std::endl; break;
	case 5: 
		std::cout << a << " в степени " << b << " = " << deg(a, b) << std::endl; break;
	}	
	return 0;
}
