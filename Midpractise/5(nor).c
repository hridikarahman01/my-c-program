#include<stdio.h>
main()
{
    int n,a,r=0;
    printf("");
    scanf("%d",&n);

    while(n>0)
    {
        a=n%10;
        n=n/10;
        r=r*10+a;
    }
    printf("%d",r);
}
