#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

///**
// * @brief считывает строку из файла
// * @param linelength колво символов в строке
// * @param f файл откуда считываем
// * @return строку
//*/
//char* fgetline(int linelength, const FILE* f);

/**
 * @brief  подсчёт кол-ва символов в строке
 * @param str_ строка
 * @return длинна строки
*/
unsigned int my_strlen(const char* str_);

/**
 * @brief вставляет строку 
 * @param to 
 * @param from 
 * @return 
*/
char* my_strcpy(char* to, char* from);


/**
 * @brief приписывает строку другой строке
 * @param to куда приписывает
 * @param from что приписывает
 * @return 
*/
char* my_strcat(char* to, const char* from);

/**
 * @brief сравнивает 2 строки лексикографически
 * @param s1 первая строка
 * @param s2 вторая строка
 * @return возвращяет 0 если равны, положительное число если первая строка больше, отрицательное число если втора строка больше
*/
int my_strcmp(const char* s1, const char* s2);




/**
 * @brief ищет вторую строку в первой
 * @param where где поиск
 * @param what что исчет
 * @return указатель на первое вхождение
*/
char* my_strstr(const char* where, const char* what);




