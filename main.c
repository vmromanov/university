#include <stdio.h>
#include "Euler.h"
#define SIZE 2 

int main()
{
//euler 1
     
 /*     unsigned int number = 0;   
      
      printf(" number = ");
      scanf_s("%du", &number);
   
      unsigned int multiplies[SIZE];
      printf("multipliers = ");
      for (unsigned int i = 0; i < SIZE; ++i)
         scanf_s("%du", &multiplies[i]);
	   printf("%llu", Problem_1(number, multiplies, SIZE));*/
//euler 2
   //unsigned int number = 0;    
   //printf("number =");
   //scanf_s("%du", &number);
   //printf("%llu", Problem_2(number));

    //euler 3
	/*unsigned*/
	/*long long value_ = 0;
	printf("value = ");
	scanf_s("%llu", &value_);
	printf("answer = %llu \n", Problem_3(value_));
	system("pause");  // попытка решить -  "программа завершилась с кодом 0"*/

//euler 4

	/*int max_palindrome = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= 999; j++)
			if (IsPalindrome(i * j) && i * j > max_palindrome)
				max_palindrome = i * j;
	}
	printf("максимальный палиндром из 3х значных чисел = %u\n", max_palindrome);*/

	//euler 5

//	int num_ = 0;
//printf("delitsa do : ");
//scanf_s("%i", &num_);
//printf("answer = %u\n", Problem5(num_));

	
	 //euler 6 

	//int  amount = 0;
	//printf("amount :\n");
	//scanf_s("%i", &amount);
	//printf("answer = %i\n", Problem6(amount));

	  //bulls_and_Cows

	unsigned int num1 = 0;
	unsigned int num2 = 0;
	unsigned int num3 = 0;
	unsigned int num4 = 0;
	printf("first num: ");
	scanf_s("%u", &num1);
	printf("\nsecond num: ");
	scanf_s("%u", &num2);
	printf("\nthird num: ");
	scanf_s("%u", &num3);
	printf("\nfourth num: ");
	scanf_s("%u", &num4);
	printf("\n");
	if (num1 > 9)
	{
		printf("ERROR, nums can be from 0 to 9");
	}
	else
	{
		if (num2 > 9)
		{
			printf("ERROR, nums can be from 0 to 9");
		}
		else
		{
			if (num3 > 9)
			{
				printf("ERROR, nums can be from 0 to 9");
			}
			else {
				if (num4 > 9)
				{
					printf("ERROR, nums can be from 0 to 9");
				}
				else
				{
					printf("u guessed num : %u", BullandCow(num1, num2, num3, num4));
				}
			}
		}
	}
   return 0;
}






