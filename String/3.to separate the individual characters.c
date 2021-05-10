#include<stdio.h>
main()
{
    char str[100];
    int i;
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
    }
    return 0;
}
