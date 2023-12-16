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

char* my_strstr(const char* where, const char* what)
{

   int counter = 0;
   char save[255]={0};
   unsigned int i, j;
   if (!where || !what)
      return NULL;
   for (i = 0; where[i]!='\0'; i++)
   {
      int flag = 1;
      if (where[i] == what[0])
      {
         
         for (j = 0; what[j] != '\0'; j++)
         {
            if (where[i + j] != what[j])
             flag = 0;
         }
         if (flag == 1) {

            for (int o = i; where[o] != '\0'; o++)
            {
               save[counter] = where[o];
               counter++;
            }
            return save;
         }
      }
      
   }
   return 0;
 
}
////разобратся с выводом


int my_strcmp(const char* s1, const char* s2)
{
   int s1_len = my_strlen(s1);
   int s2_len = my_strlen(s2);
   for (int i = 0; i < s1_len; i++)
   {
      if (s1[i] != s2[i])
      {
         if (s1[i] - s2[i] < 0)
         {
            return -1;
         }
         else
         {
            return 1;
         }
      }
   }
   if (s1_len != s2_len)
      if (s1_len - s2_len < 0)
      {
         return -1;
      }
      else
      {
         return 1;
      }
   else
   {
      return 0;
   }
}


//char* f_getline(int linelength ,FILE* f)
//{
//   while (fgetc(f) != EOF || fgetc(f) != '\n')
//   {
//      linelength++;
//   }
//   char* res = malloc(linelength * sizeof(char) + 1);
//
//
//   
//}
//
//






