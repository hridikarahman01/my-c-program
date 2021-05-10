#include<stdio.h>
int main()
{
    int r, c, n;
    do
    {
        printf("Enter n (n<=9):\n");
        scanf("%d", &n);
    }
    while (n>9 || n<0);

    for (r=0; r<n; r++)
    {
        for (c=r; c>=0; c--)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
}
