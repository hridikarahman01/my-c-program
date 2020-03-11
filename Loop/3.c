#include<stdio.h>
main()
{
    int n,i,sum=0;
    printf("The numbers are:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",i);
        sum=sum+i;
    }
    printf("\n The sum is %d",sum);
}
