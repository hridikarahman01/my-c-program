#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int n,i,x,len;
    char c,ch[105];

    printf("Enter a string to check palindrome:\n");

    gets(ch);
    len= strlen(ch);
    int isPalindrome = 1;
    for(i=0; i<=(len-1)/2; i++)
    {
        if(ch[i]!=ch[len-1-i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

