#include<stdio.h>
main()
{
    int N,i,sum=0,a[5],avg;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    avg=sum/N;
    printf("Avarage : %d",avg);
}
