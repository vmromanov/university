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
 * @brief ��������� ������ 
 * @param to 
 * @param from 
 * @return 
*/
char* my_strcpy(char* to, char* from);


/**
 * @brief ����������� ������ ������ ������
 * @param to ���� �����������
 * @param from ��� �����������
 * @return 
*/
char* my_strcat(char* to, const char* from);

/**
 * @brief ���������� 2 ������ �����������������
 * @param s1 ������ ������
 * @param s2 ������ ������
 * @return ���������� 0 ���� �����, ������������� ����� ���� ������ ������ ������, ������������� ����� ���� ����� ������ ������
*/
int my_strcmp(const char* s1, const char* s2);




/**
 * @brief ���� ������ ������ � ������
 * @param where ��� �����
 * @param what ��� �����
 * @return ��������� �� ������ ���������
*/
char* my_strstr(const char* where, const char* what);




