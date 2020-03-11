#include<stdio.h>
main()
{
    int i,n,j;
    printf("Input upto the table starting form 1:");
    scanf("%d",&n);
    printf("\nMultiplication table from 1 to %d",n);
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            if(j<=n-1)

                printf("\n%d*%d=%d",j,i,i*j);

            else
                printf("\n%d*%d=%d",j*i,i*j);

        }
        printf("\n");

    }
}
