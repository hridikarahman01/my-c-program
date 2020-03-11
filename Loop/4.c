#include<stdio.h>
main()
{
    int i,n,sum=0;
    float avg;
    printf("The 10 numbers:");
    for(i=1;i<=10;i++)
    {
        printf("\nNumbers-%d:",i);
        scanf("%d",&n);
        sum=sum+n;
        avg=sum/10.0;

    }

     printf("\nSum is %d",sum);
     printf("\nAverage is %f",avg);

}


