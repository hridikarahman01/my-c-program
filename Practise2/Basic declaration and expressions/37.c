#include<stdio.h>
main()
{
    int x,y;
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    if(x>0 && y>0)
       printf("Quadrant-I(+,+)");
    else if(x>0 && y<0)
        printf("Quadrant-II(+,-)");
    else if(x<0 && y>0)
        printf("Quadrant-III(-,+)");
    else
        printf("Quadrant-IV(-,-)");


}
