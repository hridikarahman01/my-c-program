#include<stdio.h>
main()
{
    int d,Y,M,D;
    printf("Input no.of Days:");
    scanf("%d",&d);
    Y=d/365;
    M=(d%365)/30;
    D=d-((Y*365)+(M*30));
    printf("%d Years \n%d month \n%d days",Y,M,D);
}
