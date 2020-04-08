#include<stdio.h>
main()
{
    int n;
    printf("Write a password:");
    scanf("%d",&n);
    if(n==1234)
    {
        printf("Correct password");
    }
    else
    {
        printf("Incorrect password");
    }
    return 0;
}
