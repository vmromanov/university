#include "Eyler.h"

//unsigned long long Problem_1(const unsigned int number_,
//   const unsigned int* multiples_,
//   const unsigned int size_)
//{
//   unsigned long long sum = 0;
//   for (unsigned int n = 0; n < number_; ++n)
//   {
//      for (unsigned int i = 0; i < size_; ++i)
//      {
//         if (n % multiples_[i] == 0)
//         {
//            sum += n;
//            break; //continue
//         }
//      }
//   }
//   return sum;
//}
//unsigned long long Problem_2(const unsigned int number_)
//{
//   unsigned long long sum = 0;
//   unsigned int previous = 1;
//   unsigned int current = 2;
//   unsigned int save = 0;
//   while (save < number_)
//   {
//      if (current % 2 == 0)
//         sum += current;
//      save = current;
//      current += previous;
//      if (current > number_)
//         break;
//      previous = save;
//   }
//
//
//   /*do {
//      if (now % 2 == 0)
//      {
//         sum += now;
//         break;
//
//      };
//      save = previous; previous = now; now += save;
//      } 
//   while (now < number_);*/
//         return sum;
//}
//
////unsigned long long Problem_3(const unsigned long long number_)
////{
////   unsigned long long  Bignum_ = number_;
////   unsigned long long res = 0;
////
////   ////chislo i est delitel
////   //int n = 1;
////   int kolvo = 0;
////   //while (n < bignum_)
////   //{
////   //    if (Bignum_ % n == 0)
////   //    {
////   //        kolvo++;
////   //        n += 2;
////   //    }
////   //    if (kolvo > 2)
////   //        break;
////   //    else
////   //     if (kolvo = 2)  
////   //  printf("%d otvet = ", Bignum_)
////   //unsigned kolvo = 0;
////  /* unsigned long long max = 0;*/
////   for (unsigned long long i = 2; i * i <= Bignum_; i++)
////   {
////       kolvo = 0;
////       if (Bignum_ % i == 0)
////       {
////           kolvo++;
////           /* max = i;*/
////       }
////
////       if (kolvo == 0)
////       {
////           res = Bignum_;
////       }
////   }
////       else
////           //for (unsigned i =max; i>=1; i--)
////           //    for (unsigned j = 2; j <= sqrt(i); j++)
////           //    {
////           //        if (i % j == 0)
////           //            //to chislop i ne prostoi delitel 
////           //            j++;
////           //    }
////           for (unsigned long long i = 3; i * i < Bignum_; i += 2)
////           {
////               if (Bignum_ % i == 0)
////               {
////                   unsigned z = 0;
////                   for (unsigned long long j = 2; j * j < i; j++)
////                       if (i % j == 0) z++;
////                   if (z == 0)
////                       res = i;
////
////               }
////           }
////   
////   return res;
////}
//unsigned long long Problem_3(const unsigned long long int value_)
//{
//    unsigned long long value = value_;
//    unsigned long long del = 2;
//
//    while (value % 2 == 0)
//        value /= 2;
//    del++;
//
//    while (del < value)
//    {
//        if (value % del == 0)
//        {
//            if (Prime(del) == 1)
//            {
//                while (value % del == 0)
//                    value /= del;
//            }
//        }
//        del += 2;
//    }
//
//    return value;
//}


int Reverse(const int number_)
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
    return (number_ == Reverse(number_));
}




  int DelitbezostDoNum(const int num_)
  {
      int rez = 0;
      int count = 0;
      for (unsigned int number = 20; number <= 2000000000; number += 10)
      {
          for (int i = 1; i <= num_; i++)
              if (number % i == 0)
              {
                  count++;
              }
          if (count = 20)
          {
              rez = number;
          }
      }
      return rez;
  }