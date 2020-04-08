#include<stdio.h>
main()
{
    float a,b,c,P;
    scanf("%f%f%f",&a,&b,&c);
    if(a< (b+c) && b<(a+c) && c<(a+b))
    {
        P=a+b+c;
        printf("\nPerimeter: %.1f",P);
    }
    else
    {
        printf("Not possible to create a triangle");
    }


}
