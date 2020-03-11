#include<stdio.h>
main()
{
    int n,i,k,j,t=1,spc;
    printf("Input:");
    scanf("%d",&n);
    spc=n+4-1;
    for(i=1;i<=n;i++)
    {
        for(k=spc;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            printf("* ",t++);
            printf("\n");
        spc--;
    }

}
