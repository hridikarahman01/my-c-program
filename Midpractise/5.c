#include<stdio.h>
int main()
{
    int n,a,r=0;
    printf("Input a number: ");
    scanf("%d",&n);

     while(n>=1)
{
        a=n%10;
        r=r*10+a;
        n=n/10;
}
    printf("\n Reverse: %d",r);
    return 0;
}
