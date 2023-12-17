#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Strings.h"
#include "Strings.h"
#include "Functions.h"


typedef struct employee {
    char surname[100];
    char position[100];
    char contractStartDate[100];
    int contractDuration;
    float salary;
} Employee;
typedef struct Time
{
   unsigned int currentYear;
   unsigned int currentMonth;
   unsigned int currentday;
} contractTime;


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

int isContractExpired(const char* contractDate, const int duration) 
{
  
   int currentDay = 16;     
   int currentYear = 2023;  //на момент написания в классе
   int currentMonth = 12;   

   char day[2];
   char month[2];
   char year[5];

   sscanf_s(contractDate, "%2[^.].%2[^.].%4s", day, (unsigned int)sizeof(day), month, (unsigned int)sizeof(month), year, (unsigned int)sizeof(year));

   int dayi, monthi, yeari;
   dayi = atoi(day);
   monthi = atoi(month);
   yeari = atoi(year);

    if (duration > 30)
    {
        int saved = duration;
        dayi += saved;
      
       if (dayi > 30)
       {
           monthi += dayi/30; 
           dayi = dayi%30; 
       }
       int savem = monthi; 
       if (monthi > 12) 
       {
           yeari += savem / 12;   
           monthi = savem % 12;      
       }

    }

    if (yeari < currentYear) 
    {
        return 1; 
    }
    else 
    if (yeari == currentYear && monthi < currentMonth) 
    {
        return 1; 
    }
    else 
       if (yeari == currentYear && monthi == currentMonth && dayi <= currentDay + 5) 
        {
        return 1; 
        }

    return 0;
}











