#include<stdio.h>
int main()
{
    int i, j, row, col;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d",&col);
    printf("Enter first elements:\n");
    for (i=0; i<row; i++)

    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("First array= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second elements of:\n");
    for (i=0; i<row; i++)

    {
        for(j=0; j<col; j++)
        {
            printf("b[%d][%d] =",i,j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("Second array= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum:\n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for (j=0; j<col; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }



}
