﻿#include <stdio.h>
#include "Euler.h"
#include <stdlib.h>
#include "Strings.h"
#include "Functions.h"
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

	unsigned int arr[4];
	for (int i = 0; i < 4; i++)
	{
		printf("загадайте %d-ое  число \n", i + 1);
		scanf_s("%d", &arr[i]);
	}
	 for (int i=0;i<4;i++)
		 if (arr[i] % 11 > 9)
		 {
			 printf("ошибка ввода");
			 exit;
		 }
	

	 printf(BullandCow(arr[0],arr[1],arr[2],arr[3]));


	

	//my_strlen chek

	/*char* str = "123456";
	printf("%d", my_strlen(str) );

   */

   // my_strcpy chek

//char a[] = "abcde";
//char b[] = "1a34";
//printf(my_strcpy(a, b));

   //my_strcat chek

//char a[100] = "12345";
//char b[] = "6789";
//printf(my_strcat(a, b));


   // EULER FUNCTION
//
//unsigned int a = 0;
//printf("enter num to euler function \n");
//scanf_s("%d", &a);
//printf("\n%d", Euler_func(a));





return 0;
}


