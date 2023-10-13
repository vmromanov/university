#pragma once
#include <stdbool.h>
///*
//* @brief найти сумму меньших number_ кратных multiples_
//* @param number_ : число меньше которого ищется сумма
//* @param multiples_ : массив кратных
//* @param size_ : сумма меньших и кратных
//* @return 
//*/
//unsigned long long Problem_1(const unsigned int number_,
//   const unsigned int* multiples_,
//   const unsigned int size_);
//
///* @brief найти сумму чисел кратных 2
//* @param number_ : число меньше которого числа фибаначи
//*/
//
//unsigned long long Problem_2(const unsigned int number_);
//
//
//unsigned long long Problem_3(unsigned long long value_);
//


/* @brief найти наиб полиндром
*  @param IsPalindrome : проверка на полиндром
* @param Reverse : переворачивает число
* @return самый большой палиндром
*/

bool IsPalendrome(int number_);

int Reversed(int number_);



/*@brief поиск числа делящегося на каждое число до н
* @param num_ до кокого числа делить
*/
int DelitbezostDoNum(const int num_);

/*@brief erazn mejdu summ kv i kv summi
* @param amount : kol-vo elementov
*/

int Raznostmejdukvsummiandcummikv(int amount);