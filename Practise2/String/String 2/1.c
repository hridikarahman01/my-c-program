#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{

    char string[1000];

   printf("Input a string in lowercase:\n");
   gets(string);

   printf("Here is the above string UPPERCASE:%s\n", strupr(string));

   return  0;

}

