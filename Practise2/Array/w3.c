#include<stdio.h>
main()
{
    int n,i,a[10],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is : %d",sum);
}
