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


char* my_strcpy(char* here, char* from)
{
   char* tmp;
   while (*from!='\0')
   {
      *here = *from;
       tmp = from; 
      here++;
      from++;
   }
   return tmp;
}


