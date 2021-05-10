#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof str, stdin);
    doReplaceCharacter(str);
    return 0;

}
void doReplaceCharacter(char str[100])
{
    int length,i,ch;;
    length=strlen(str);
    printf("\nThe given sentence is   : %s",str);
    printf("After Case changed the string  is: ");
    for(i=0; i<length; i++)
    {
        ch=islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
        putchar(ch);
    }
}
