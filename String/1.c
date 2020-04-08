#include<stdio.h>
#include<conio.h>

int main(void)
{
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    printf("The string you entered is : %s\n",str);
}
