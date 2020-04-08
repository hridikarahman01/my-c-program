#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a[100], b[100];

    printf("Enter a string to check palindrome:\n");
    gets(a);

    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
