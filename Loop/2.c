#include<stdio.h>
main()
{
    int i,sum=0;
    printf("The first 10 numbers:");
    for(i=1;i<=20;i++)
    {
        printf("\n%d",i);
        sum=sum+i;
    }
    printf("\n The sum is : %d",sum);
}
