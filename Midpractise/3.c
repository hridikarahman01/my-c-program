#include<stdio.h>
main()
{
    int i,F,I;
    printf("Inch:");
    scanf("%d",&i);
    F=i/12;
    I=i%12;
    printf("%d Feet %d Inch",F,I);
    return 0;
}
