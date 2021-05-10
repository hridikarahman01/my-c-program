#include<stdio.h>
void main()
{
    char str[100];
    int i,word=0;
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
    {
        word++;
    }
    }
    printf("%d",word+1);
}
