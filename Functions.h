#pragma once
#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_ 

/*
* @brief âîçâîäèò ÷èñëî â êâàäðàò.
* @paqram value_ ÷èñëî.
* @reurn êâàäðàò ÷èñëà.
*/
unsigned long long Square(const long long value_);

#endif
#pragma once
#include <stdio.h>
#include<stdbool.h>
bool Prime(unsigned long long int x);


/*
* @brief переводит char в int
*/
int charToInt(const char* str);