#include <stdio.h>
int main()
{
    int arr[100];
    int n, i;
    printf("Enter number of input:\n");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order:\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
