#include<stdio.h>
main()
{
    int i,n,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            if(n<=10)
        printf("\nThe numbers are: %d",i);
    sum=sum+i;
    avg=sum/10.0;
    }
    printf("\nThe sum is: %d",sum);
    printf("\nThe avg is: %f",avg);
}
