#include "Eyler.h"
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


   /*do {
      if (now % 2 == 0)
      {
         sum += now;
         break;

      };
      save = previous; previous = now; now += save;
      } 
   while (now < number_);*/
         return sum;
}