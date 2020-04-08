#include<stdio.h>
main()
{
    double i,j=1,d,S=0;
    for(i=1; i<=7; i+=2)
    {
        d=i/j;
        S=S+d;
        j=j*2;
    }
    printf("Value of series : %.2lf ",S);
}
