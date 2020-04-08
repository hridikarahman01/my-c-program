#include<stdio.h>
main()
{
    int x,i,s,c=0;
    printf("Input size of array:");
    scanf("%d",&x);
    int a[x];
    printf("Input elements in array:\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element to search?:");
    scanf("%d",&s);
    for(i=0;i<x;i++)
    {
        if(s==a[i])
        {
            c++;
        }
    }
    printf("\nElement found %d times",c);

}
