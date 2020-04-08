#include<stdio.h>
int main()
{
    int num[10],i,j,n,max=0,pos=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=0; j<n; j++)
    {
        if(num[j]>max)
        {
            max=num[j];
            pos=j;
        }
    }
    printf("Highest value: %d\nPosition: %d",max,pos+1);
    return 0;
}
