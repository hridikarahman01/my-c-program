#include<stdio.h>
main()
{
    int a[5],i,sum=0,s=0,t=0;
    float average;
    printf("Enter array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    average=sum/5;
    printf("Average is %.2f",average);
    for(i=0;i<5;i++)
    {
        if(a[i]>average)
        {
            s++;
        }
        if(a[i]<average)
        {
            t++;
        }
    }
    printf("\n%d of them got above average \n%d of them got below average",s,t);
}
