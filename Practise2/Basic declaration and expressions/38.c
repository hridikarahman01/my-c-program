#include<stdio.h>
main()
{
    int x,y;
    float div_res;

    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);

    if(y!=0)
    {
        div_res=(float)x/(float)y;
        printf("%.1f",div_res);
    }

    else
        printf("Not Divisible");
}
