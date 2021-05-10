#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char str[100];
    int i,alp=0,dig=0,splch=0;
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<'z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }
        else
        {
            splch++;
        }

    }
    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", dig);
    printf("Number of Special characters in the string is : %d\n", splch-1);
}

