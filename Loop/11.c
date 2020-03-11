#include<stdio.h>
main()
{
    int rows,i,n,j;
    printf("Input:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
    }
}
