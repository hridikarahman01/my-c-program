#include<stdio.h>
int main()
{
    int x,n,i,y;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of n:");
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    y= summation(n, arr, x);
    printf("%d", y);
}
int summation(int z, int num[z], int m)
{
    int c, s=0;
    for(c=0; c<z; c++)
    {
        if(num[c]>m)
        {
            s= s+num[c];
        }
    }
    return s;
}
