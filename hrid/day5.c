#include<stdio.h>
main()
{
    double num1,num2;

    printf("Enter a number:");
    scanf("%lf", &num1);
    printf("Enter another number:");
    scanf("%lf", &num2);

    printf("%0.02lf + %0.02lf = %0.02lf\n", num1,num2,num1+num2);
    printf("%0.02lf - %0.02lf = %0.02lf\n", num1,num2,num1+num2);
    printf("%0.02lf * %0.02lf = %0.02lf\n", num1,num2,num1*num2);
    printf("%0.02lf / %0.02lf = %0.02lf\n", num1,num2,num1/num2);

    return 0;
}
