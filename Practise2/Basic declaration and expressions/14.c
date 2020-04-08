#include<stdio.h>
main()
{
    int d;
    float l,average;
    printf("Input total distance in km:");
    scanf("%d",&d);
    printf("Input total fuel spent in litres:");
    scanf("%f",&l);
    average = d/l;
    printf("\nAverage consumption(km/lt): %.3f",average);
    return 0;
}
