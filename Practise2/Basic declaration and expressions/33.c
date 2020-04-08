#include<stdio.h>

int main()
{
    int num[10],n,i,j,max=0,pos=0;
    printf("Enter number of inputs:\n");
    scanf("%d",&n);
    printf("Input num:\n");
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

    printf("Highest value : %d \nPosition: %d",max,pos+1);
    return 0;
}
