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
 * @brief  подсчЄт кол-ва символов в строке
 * @param str_ строка
 * @return длинна строки
*/
unsigned int my_strlen(const char* str_);



/**
 * @brief вставл€ет одну строку в другую
 * @param here куда вставл€ют
 * @param from откуда вставл€ют
 * @return строку со вставленной строкой
*/
char* my_strcpy(char* here, char* from);

