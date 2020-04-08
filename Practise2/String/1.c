#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str1[100],str2[100];
    int l=0,j=0;
       printf("Input first string : ");
       fgets(str1, sizeof str1, stdin);
       printf("Input second string : ");
       fgets(str2, sizeof str2, stdin);
    while(str1[l]!='\0')
    {
        l++;
    }
    while(str2[j]!='\0')
    {
        j++;
    }
    if(l<j)
    {
        printf(str1);
    }

    else if(l>j)
    {
        printf(str2);
    }
    else
    {
        printf(str1);
    }
    return 0;

}
