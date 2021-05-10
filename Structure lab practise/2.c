#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

struct Point
{
    float x,y;
};

float sqr(float val)
{
    return val*val;
}

float calDist(struct Point point1,struct Point point2)
{
    return sqrt(sqr(point1.x-point2.x)+sqr(point1.y-point2.y));
}

int main()
{
    int n,i,j;
    float dist;

    struct Point point1,point2;

    printf("First point: ");
    scanf("%f %f",&point1.x,&point1.y);

    printf("Second point: ");
    scanf("%f %f",&point2.x,&point2.y);

    dist = calDist(point1,point2);

    printf("\nEuclidian Distance: %f\n", dist);

    return 0;
}
