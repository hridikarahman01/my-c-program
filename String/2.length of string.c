#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Input the string:");
    fgets(str,sizeof str,stdin);

    for(i=0;str[i]!='\0';i++);
    printf("Length of the string: %d",i-1);
    return 0;
}

