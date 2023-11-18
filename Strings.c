#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Strings.h"

//char* fgetline(int linelength, const FILE* f)
//{
//   int linelength = 0;
//    do
//    {
//       linelength++;
//    } 
//    while (fgetc(f) != EOF || fgetc(f)!="\n");
//}





unsigned int my_strlen(const char* str_)
{
   unsigned int len = 0;
   for (; str_[len] != '\0'; len++);
   return len;
}

char* my_strcpy(char* to, char* from)
{
 
  unsigned int i = 0;
   for (; from[i] != '\0'; i++)
      to[i] = from[i];

   to[i] = '\0';

   return to;
}

char* my_strcat(char* to, const char* from)
{
   int i = 0;
   int lngsave = my_strlen(to);
   for (; from[i] != '\0'; i++)
      to[lngsave+ i] = from[i];

   to[lngsave + 1 + i] = '\0';
   
   return to;
}







