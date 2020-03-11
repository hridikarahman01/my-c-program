#include<stdio.h>
main()
{
    int n,i,m,sum=0;
    printf("Input the number:");
    scanf("%d",&n);
    printf("Even numbers are:");

    for(i=1;i<=n;i++)


    {
        m=2*i;
        printf("\n %d",m);
        sum=sum+m;
    }
    printf("\nSum is %d",sum);
}
