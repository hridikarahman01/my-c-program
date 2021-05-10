#include<stdio.h>
main()
{
    char str[100];
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    printf("The string you entered is: %s",str);
}
