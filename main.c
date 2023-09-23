#include <stdio.h>
#include "Functions.h"
#include "Eyler.h"
#define SIZE 2 


int main()
{
//   unsigned int number = 0;
//
//   printf(" number = ");
//   scanf_s("%du", &number);
//
//   unsigned int multiplies[SIZE];
//   printf("multipliers = ");
//   for (unsigned int i = 0; i < SIZE; ++i)
//      scanf_s("%du", &multiplies[i]);
//   printf("%llu", Problem_1(number, multiplies, SIZE));

   unsigned int number = 0;

   printf("number =");
   scanf_s("%du", &number);
   printf("%llu", Problem_2(number));

   return 0;
}