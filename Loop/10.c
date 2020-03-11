#include<stdio.h>
main()
{
    int rows,i,j;
    printf("Input the number:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
}
