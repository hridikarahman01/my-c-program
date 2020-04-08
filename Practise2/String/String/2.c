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
    printf("ASCII Value is: ");
    for(i=0;i<len1;i++)
    {
        if(ch1[i]==' ')
            continue;
        printf("%d ",ch1[i]);
    }
    return 0;
}
