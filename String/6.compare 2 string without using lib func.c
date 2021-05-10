#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i=0,a=0;
    printf("Input the 1st string:");
    fgets(str1,sizeof str1,stdin);
    printf("Input the 2nd string:");
    fgets(str2,sizeof str2,stdin);
    while(str1[i]==str2[i])
    {
        if(str1[i]!='\0' || str2[i]!='\0')
            i++;
    }
    if(str1[i-1]=='\0' && str2[i-1]=='\0')
        a=0;
    else if(str1[i]>str2[i])
        a=1;
    else if(str1[i]<str2[i])
        a=-1;

    if(a==0)
    {
        printf("\nThe length of both strings are equal and \nalso both strings are equal.");
    }
    else if(a==1)
    {
        printf("\nThe length of the first string is greater than second.");
    }
    else
    {
        printf("\nThe length of the first string is smaller than second.");
    }
}


