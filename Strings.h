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



