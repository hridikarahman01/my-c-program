#include<stdio.h>
int main()
{
    int n,i;
    printf("Input number:");
    scanf("%d",&n);
    int a[n+5];
    printf("Enter array elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int s=1;
    for(i=0; i<n-1; i++){
        if(a[i]>a[i+1])
        {
            s=0;
            break;
        }
}
if(s==1)
{
    printf("Sorted");
}
else
{
    printf("Not sorted");
}
}
