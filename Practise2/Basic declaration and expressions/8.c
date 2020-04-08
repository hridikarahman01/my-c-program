#include<stdio.h>
main()
{
    int d,Y,W,D;

    printf("Number of days:");
    scanf("%d",&d);

    Y=d/365;
    W=(d%365)/7;
    D=d-((Y*365)+(W*7));

    printf("Years = %d",Y);
    printf("\nWeeks= %d",W);
    printf("\nDays = %d",D);
    return 0;
}
