#include "Functions.h"
#include <stdbool.h>
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