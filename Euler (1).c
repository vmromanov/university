#include "Euler.h"
#include <math.h>
#include "Functions.h"


unsigned long long Problem_1(const unsigned int number_,
   const unsigned int* multiples_,
   const unsigned int size_)
{
   unsigned long long sum = 0;
   for (unsigned int n = 0; n < number_; ++n)
   {
      for (unsigned int i = 0; i < size_; ++i)
      {
         if (n % multiples_[i] == 0)
         {
            sum += n;
            break; //continue
         }
      }
   }
   return sum;
}



unsigned long long Problem_2(const unsigned int number_)
{
   unsigned long long int sum = 0;
   unsigned int previous = 1;
   unsigned int current = 1;
   unsigned int save = 0;
   while (current < number_)
   {
      if (current % 2 == 0)
         sum += current;
      save = current + previous;
      previous = current;
      current = save;
   }
         return sum;
}


unsigned long long Problem_3(const unsigned long long int value_)
{
    unsigned long long value = value_;
    unsigned long long del = 2;

  while (value % 2 == 0)
       value /= 2;
    del++;

    while (del < value)
    {
        if (value % del == 0)
        {
            if (Prime(del) == 1)
            {
                while (value % del == 0)
                    value /= del;
            }
        }
        del += 2;
    }

    return value;
}


int Reversed(const int number_)
{
    int lastdigit = 0;
    int save = number_;
    int reversednum = 0;
    while (save > 0)
    {
        lastdigit = save % 10;
        reversednum = reversednum * 10 + lastdigit;
        save /= 10;
    }
    return reversednum;
}

  bool IsPalindrome(const int number_)
{
    return (number_ == Reversed(number_));
}




  int Problem5(const int num_)
  {
      int rez = 2000000000;  
          for (unsigned int number = 20; number <= 2000000000; number += 20)
          {
              int count = 0;
              for (int i = 1; i <= num_; i++)
                  if (number % i == 0)
                  {
                      count++;
                  }
              if (count == 20) 
                  
                  {
                   rez = number;
                   break;
                  }
          }  
      return rez;
  }


  int Problem6(int amount)
  {
      int summakv = 0;
      int kvsummi = 0;
      int summa = 0;
      int answ = 0;
      for (int i = 1; i <= amount; i++)
      {
          summakv = summakv + i * i;
      }
      for (int j = 1; j <= amount;j++)
      {
          summa = summa + j;
      }
      kvsummi = summa * summa;
      answ = abs(summakv - kvsummi);
      return answ;
  }

  int BullandCow(int num1, int num2, int num3, int num4)
  {
      int rez = 0;
      int bulls = 0;
      int cows = 0;
      unsigned int guess[4] = { 0 };


      do
      {
          bulls = 0;
          cows = 0;
          for (unsigned int i = 0; i < 4; i++)
          {
              printf("\n угадайте %u -тое число \n", i + 1);
              scanf_s("%d", &guess[i]);
          }

          if (guess[0] == num1)
          {
              bulls++;
          }
          else
          {
              if (guess[0] == num2 || guess[0] == num3 || guess[0] == num4)
              {
                  cows++;
              }
          }
             

          if (guess[1] == num2)
          {
              bulls++;
          }
          else 
          {
              if (guess[1] == num3 || guess[1] == num1 || guess[1] == num4)
              {
                  cows++;
              }
          }

          if (guess[2] == num3)
              bulls++;
          
          else
          {
              if (guess[2] == num2 || guess[2] == num1 || guess[2] == num4)
              {
                  cows++;
              }
          }
          if (guess[3] == num4)
              bulls++;
          else 
          {
              if (guess[3] == num1 || guess[3] == num2 || guess[3] == num3)
              {
                  cows++;
              }
          }




          if (bulls == 4)
          {
              rez = guess[0] * 1000 + guess[1] * 100 + guess[2] * 10 + guess[3];
          }
          else
          {
              printf("cows :%d bulls:%d\n", cows, bulls);
          }

      } while (bulls != 4);
  
      return rez;
  }