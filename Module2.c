#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Strings.h"
#include "Strings.h"

typedef struct employee {
    char surname[100];
    char position[100];
    char contractStartDate[100];
    int contractDuration;
    float salary;
} Employee;
typedef struct currentTime
{
   unsigned int currentYear;
   unsigned int currentMonth;
   unsigned int currentday;
} nowtime;


void remfirstsimb(char* str, char simb)
{
    char* p = str;
    int found = 0;

    if (str == NULL)
        return;

    while (*p) {
        if (*p == simb) {
            found = 1;
            break;
        }
        p++;
    }
    if (found) {
        while (*(p + 1)) {
            *p = *(p + 1);
            p++;
        }
        *p = '\0';
    }
}

/////задание 2

int isContractExpired(const char* contractDate) 
{
  
   int currentDay = 16;     //
   int currentYear = 2023;  //на момент написания в классе
   int currentMonth = 12;   //

    int day, month, year;
    sscanf_s(contractDate, "%d.%d.%d", &day, &month, &year);

    if (year < currentYear) 
    {
        return 1; 
    }
    else 
    if (year == currentYear && month < currentMonth) 
    {
        return 1; 
    }
    else 
       if (year == currentYear && month == currentMonth && day <= currentDay + 5) 
        {
        return 1; 
        }

    return 0;
}











