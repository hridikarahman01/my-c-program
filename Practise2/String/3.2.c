#include<stdio.h>
int main()
{
    int n,i,x,len1=0,len2=0;
    char c,ch1[100],ch2[100];
    printf("Enter String: ");
    for(i=0;;i++)
    {
        scanf("%c",&c);
        if(c=='\n')
            break;
        ch1[len1++]=c;
    }
    ch1[len1]='\0';
    //printf("ASCII Value is: ");
    for(i=0;i<len1;i++)
    {
        c=ch1[i];
        if(c>='a' && c<='z')
        {
            c=c+'A'-'a';
        }
        else if(c>='A' && c<='Z')
        {
            c=c+'a'-'aA';
        }
        ch1[i]=c;
        printf("%s\n",ch1);
    }
    return 0;
}

