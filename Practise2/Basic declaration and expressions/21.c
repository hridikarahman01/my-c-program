#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=20)
        printf("[0,20]");
    else if(n<=40)
        printf("[21,40]");
    else if(n<=60)
        printf("[41,60]");
    else if(n<=80)
        printf("[61,80]");
    else
        printf("Error");
}
