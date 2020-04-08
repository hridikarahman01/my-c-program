#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i;
    printf("Input the string:");
    fgets(str, sizeof str, stdin);

    for(i=1;str[i]!='\0';i++);

    printf("Length of the string is : %d\n",i-1);
    return 0;
}
