#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int n,i,x,len;
    char c,ch[105];

    printf("Input the string : ");

    gets(ch);
    len= strlen(ch);

    printf("The characters of the string in reverse are:\n");
    for(i=len-1;i>=0;i--) {
        printf("%c ",ch[i]);
    }


    return 0;
}
