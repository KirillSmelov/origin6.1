#include "function.h"
int summ(int a, int b)
{
	return  a + b;
}
int sub (int a, int b)
{
	return  a - b;
}
int mult(int a, int b)
{
	return  a * b;
}
float division(int a, int b)
{
	float div = 0;
	div = a / static_cast<float>(b);
	return  div;
}
float deg(int a, int b)
{
	float res = a;
	for (int i = 1; i < b; i++)
	{
		res = res*a;
	}
	return res;
}