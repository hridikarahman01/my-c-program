#include<stdio.h>
main()
{
    int N[5],i,sum=0;
    scanf("%d%d%d%d%d",&N[0],&N[1],&N[2],&N[3],&N[4]);
    for(i=0; i<5; i++)
    {
        if(N[i]%2!=0)
        {
            sum=sum+N[i];
        }

    }
    printf("\nSum is: %d",sum);

}
