#include<stdio.h>
main()
{
    int h1,m1,h2,m2,d,h,m;
    printf("Enter time of first city:\n");
    scanf("%d %d",&h1,&m1);
    printf("Enter time of 2nd city:\n");
    scanf("%d %d",&h2,&m2);
    d=(h1*60+m1)-(h2*60+m2);
    h=d/60;
    m=d%60;
    printf("%d hour %d min",h,m);
    return 0;
}
