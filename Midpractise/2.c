#include<stdio.h>
main()
{
    int f,i,r;
    printf("Feet:");
    scanf("%d",&f);
    printf("Inch:");
    scanf("%d",&i);
    r=f*12+i;
    printf("%d inch",r);
    return 0;
}
