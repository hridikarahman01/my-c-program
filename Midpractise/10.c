#include<stdio.h>
main()
{
    int a,b,max;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("Maximum is: %d",max);
}
