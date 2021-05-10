#include<stdio.h>
int main()
{
    int N, row, col;
    printf("Enter how many rows and column you want: \n");
    scanf("%d", &N);
    int table [N][N];
    for (int row = 0; row <N; row++)
    {

        for (int col= 0; col< N; col++)
        {

            if(row==col)
            {
                printf(" ");
                table [row][col] = 0 ;
            }
            else if (row> col)
            {
                table[row][col]=-1;
            }
            else
            {
                printf(" ");
                table [row][col]= 1 ;
            }
            printf("%d", table[row][col]);

        }
        printf("\n");
    }
}
