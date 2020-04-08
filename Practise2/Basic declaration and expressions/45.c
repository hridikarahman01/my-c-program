#include<stdio.h>
main()
{
    int i;
    float S=0;
    for(i=1;i<=50;i++)
    {
        S=S+(float)1/i;
    }
    printf("Value of S: %.2f\n",S);

}
