#pragma once



/*
* @brief удаляет первый встреченый указаный элемент
*/
void remfirstsimb(char* str, char simb);

/**
 * @brief истекает ли контракт 
 * @param contractDate 
 * @param duration
 * @return 
*/
int isContractExpired(const char* contractDate,const int duration);

