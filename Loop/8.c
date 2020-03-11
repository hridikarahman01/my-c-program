#include<stdio.h>
main()
{
    int n,i,sum=0;

    printf("Input number of terms:");
    scanf("%d",&n);
    printf("\nThe odd numbers are:");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",2*i-1);
        sum=sum+2*i-1;
    }
    printf("\n Sum is %d",sum);
}


