#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark[10],i,sum=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&mark[i]);
        sum+=mark[i];
    }

    printf("%d",sum);

    return 0;
}
