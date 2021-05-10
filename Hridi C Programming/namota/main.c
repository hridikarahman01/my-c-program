#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,res;
    printf("Enter a number to see namota: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        res=n*i;
        printf("%d * %d = %d\n",n,i,res);
    }
    return 0;
}
