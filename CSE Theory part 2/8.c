#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check=-1;

char s[100];

void push(char a);
void if_Not_Matched();
void if_Matched();

void main()
{
    int i;
    char p[100];
    printf("Enter correct parentheses:\n");
    scanf(" %s",&p);
    int size = strlen(p);
    for(i=0; i<size ; i++)
    {
        if(p[i]=='(')
        {
            push(p[i]);
        }
        else if(p[i]==')')
        {
            if_Not_Matched();
        }
    }
    if_Matched();
}
void push(char p)
{
    check++;
    s[check]=p;
}
void if_Not_Matched()
{
    if(check<=-1)
    {
        printf("NO\n");
        exit(0);
    }
    else
    {
        check--;
    }
}
void if_Matched()
{
    if(check==-1)
    {
        printf("\YES\n");
    }
    else
    {
        printf("\NO\n");
    }
}
