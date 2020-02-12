#include<stdio.h>
main()
{
    double a,b,c,d,result;
    printf("weight item1:");
    scanf("%lf",&a);

    printf("No. of item1:");
    scanf("%lf",&b);

    printf("weight item2:");
    scnaf("%lf",&c);

    printf("No.of item2:");
    scanf("%lf",&d);

    result = ((a*b)+(c*d))/(b+d);
    printf("Average value = %lf\n",result);
    return 0;
}
