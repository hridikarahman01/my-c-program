#include<stdio.h>
void removeFromArray(int a[], int N, int V)
{
    int i,index;
    for(i=1; i<=N; i++)
    {
        if(a[i]==V)
        {
            index=i;
            break;
        }
    }
    for(i=index; i<N; i++)
    {
        a[i]=a[i+1];
    }
    a[N]=0;
    for(i=1; i<=N; i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int N,V,i,index;
    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("Enter the value of V:");
    scanf("%d",&V);
    int a[N+5];

    for(i=1; i<=N; i++)
    {
        scanf("%d",&a[i]);
    }
    removeFromArray(a,N,V);

    return 0;
}
