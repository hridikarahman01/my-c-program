#include<stdio.h>
main()
{
    int n,i,f=1;
    printf("input the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    {
        printf("factor is %d",f);
    }
}
