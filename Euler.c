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
   unsigned long long sum = 0;
   unsigned int previous = 1;
   unsigned int current = 2;
   unsigned int save = 0;
   while (save < number_)
   {
      if (current % 2 == 0)
         sum += current;
      save = current;
      current += previous;
      if (current > number_)
         break;
      previous = save;
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
                  if (rez>number)
                  {
                   rez = number;
                   
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

  int BullandCow(int choose, int guess) //не готовый вариант, переделать под возвращение какогото параметра, он будет определять будит ли
      //функция вызвана ещё раз(соединить с сканом угадывания) 
  {
      int bull = 0;
      int cow = 0;
      for (int i = 0; i <= 3; i++)
      {
          for (int j = 0; j <= 3; j++)
          {
              if ((choose % (10 * j)) == (guess % (10 * i)))
                  if (i == j)
                  {
                      bull++;
                  }
                  else
                  {
                      cow++;
                  }
          }
      }

      printf("коров: %i быков:%i", bull, cow);
      return 0;

  }