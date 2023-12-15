#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Strings.h"
#include "Strings.h"

typedef struct {
    char surname[100];
    char position[100];
    char contractStartDate[100];
    int contractDuration;
    float salary;
} Employee;



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

int isContractExpired(const char* contractDate) {
    time_t currentTime = time(NULL);
    struct tm* date = localtime_s(&currentTime);
    int currentDay = date->tm_mday;
    int currentMonth = date->tm_mon + 1; 
    int currentYear = date->tm_year + 1900; 

    int day, month, year;
    sscanf_s(contractDate, "%d.%d.%d", &day, &month, &year);

    if (year < currentYear) {
        return 1; 
    }
    else 
    if (year == currentYear && month < currentMonth) 
    {
        return 1; 
    }
    else if (year == currentYear && month == currentMonth && day <= currentDay + 5) {
        return 1; 
    }

    return 0; // Contract is not expired
}











