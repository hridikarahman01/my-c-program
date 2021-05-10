#include<stdio.h>
int main()
{
    int number,sum=0;
    while(number!=0)
    {
        printf("Enter Number: ");
        scanf("%d",&number);
        sum+=number;
    }
    printf("Sum=%d",sum);
    return 0;
}
