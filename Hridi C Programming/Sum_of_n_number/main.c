#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Input a number:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        sum+=i;

    }
    printf("sum of 1 to %d is %d",n,sum);
    return 0;
}
