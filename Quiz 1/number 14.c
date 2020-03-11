#include<stdio.h>
main()
{
    float a,b,result;
    printf("Input total distance in km:");
    scanf("%f",&a);
    printf("Input total fuel in litres:");
    scanf("%f",&b);
    result = (a+b)/2;
    printf("average consumption km/lt : %.3f",result);
}
