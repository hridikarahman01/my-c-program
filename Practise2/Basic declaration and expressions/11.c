#include<stdio.h>
main()
{
    float a,b,c,d,Average;

    printf("Weight-item1:");
    scanf("%f",&a);

    printf("No. of item1:");
    scanf("%f",&c);

    printf("Weight-item2:");
    scanf("%f",&b);

    printf("No. of item2:");
    scanf("%f",&d);

    Average=((a*c)+(b*d))/(c+d);
    printf("Average value: %.4f",Average);

}
