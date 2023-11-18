#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

///**
// * @brief ��������� ������ �� �����
// * @param linelength ����� �������� � ������
// * @param f ���� ������ ���������
// * @return ������
//*/
//char* fgetline(int linelength, const FILE* f);

/**
 * @brief  ������� ���-�� �������� � ������
 * @param str_ ������
 * @return ������ ������
*/
unsigned int my_strlen(const char* str_);



/**
 * @brief ��������� ���� ������ � ������
 * @param here ���� ���������
 * @param from ������ ���������
 * @return ������ �� ����������� �������
*/
char* my_strcpy(char* here, char* from);

