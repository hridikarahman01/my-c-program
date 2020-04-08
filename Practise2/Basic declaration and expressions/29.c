#include<stdio.h>
main()
{
    int n[5],i,sum=0;
    scanf("%d%d%d%d%d",&n[0],&n[1],&n[2],&n[3],&n[4]);
    for(i=0; i<5; i++)
    {
        if(n[i]%2==1)
        {

            sum=sum+n[i];
        }
    }
    printf("Sum: %d",sum);

}
