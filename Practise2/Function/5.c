#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number:");
    scanf("%d", &x);
    y= isPerfect(x);
    if (y==1)
    {
        printf("YES");
    }
    if (y==0)
    {
        printf("NO");
    }
}
int isPerfect(int N)
{
    int i, s=0;
    for(i=1; i<N; i++)
    {
        if(N%i==0)
        {
            s=s+i;
        }
    }
    if(s==N)
    {
        return 1;
    }
    if(s!=N)
    {
        return 0;
    }
}
