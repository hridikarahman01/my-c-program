#include<stdio.h>
main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        max=a;
    else if(b>a && b>c)
        max=b;
    else
        max=c;
    printf("Maximum is %d",max);
}