#include<stdio.h>
main()
{
    int x1,y1,x2,y2;
    float Distance;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    Distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between the said points: %.4f",Distance);

}
