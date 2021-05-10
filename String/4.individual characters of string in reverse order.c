#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i,l;

    printf("Input the string:");
    fgets(str,sizeof str,stdin);

    printf("The characters of the string in reverse are :");
    for(i=l;i>=0;i--)
    {
        printf("%c ",str[i]);
    }
    return 0;

}
