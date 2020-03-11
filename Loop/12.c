#include<stdio.h>
main()
{
    int rows,i,j,k=1;
    printf("Input:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
            printf(" %d",k++);
        printf("\n");
    }
}
