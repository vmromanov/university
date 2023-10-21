#pragma once
#include <stdbool.h>
/*
* @brief ����� ����� ������� number_ ������� multiples_
* @param number_ : ����� ������ �������� ������ �����
* @param multiples_ : ������ �������
* @param size_ : ����� ������� � �������
* @return 
*/
unsigned long long Problem_1(const unsigned int number_,
   const unsigned int* multiples_,
   const unsigned int size_);

/* @brief ����� ����� ����� ������� 2
* @param number_ : ����� ������ �������� ����� ��������
*/

unsigned long long Problem_2(const unsigned int number_);


unsigned long long Problem_3(unsigned long long value_);



/* @brief ����� ���������� ���������
*  @param IsPalindrome : �������� �� ���������
* @param Reverse : �������������� �����
* @return ����� ������� ���������
*/

bool IsPalindrome(int number_);

/* @brief �������������� �����
* @param number_ : �����
*/
int Reversed(int number_);



/*@brief ����� ����� ���������� �� ������ ����� �� �
* @param num_ �� ������ ����� ������
*/
int Problem5(const int num_);

/*@brief �������� ����� ������ ��������� � ��������� �����
* @param amount : ���������� ���������
*/

int Problem6(int amount);