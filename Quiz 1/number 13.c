#include<stdio.h>
main()
{
    int a,b,c,maximum,result;
    printf("Input the first integer:");
    scanf("%d",&a);
    printf("Input the second integer:");
    scanf("%d",&b);
    printf("Input the third integer:");
    scanf("%d",&c);

    result = (a+b+abs(a-b))/2;
    maximum = ((result+c)+abs(result-c))/2;

    printf("Maximux value of three integer: %d",maximum);

}
