#include <stdbool.h>
#include <math.h>
#include "Functions.h"

unsigned long long Square(const long long value_)
{
   return value_ * value_;
}

bool Prime(unsigned long long int x)
{
	if (x % 2 == 0)
		return false;

	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
	{
		if (x % 2 == 0)
			return false;
	}
	return true;
}

int Vzaim_simpl(int a, int b)
{
	if (b == 0) return a;  //НОД алгоритмом евклида
	return Vzaim_simpl(b, a % b);
}


int Simpl(int a)
{
	unsigned int c = 0;
	for (int i = 2; i * 2 <= a; i++)
		if (a % i == 0) { c++; };
	if (c == 0) {
		return 1;
	}
	else
	{
		return 0;
	}

}

 int Euler_func(unsigned int a)
{
	unsigned int amount = 0;
	for (unsigned int i = 0; i <= a; i++)
		if (Vzaim_simpl(i, a) == 1) amount++;
	return amount;
}

 int charToInt(const char* str) {
	 int number = 0;
	 for (int i = 0; str[i]; i++)
		 number = number * 10 + str[i] - '0';
	 return number;
 }