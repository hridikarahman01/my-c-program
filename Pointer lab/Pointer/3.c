#include<stdio.h>
int main()
{
    int r=5;
    int radious=&r;
    int *area=printCircle(radious);
    int *c=printCircumference(radious);
    printf("%d\n",*area);
    printf("%d\n",*c);
}
void printCircle(int *radious)
{
    int r=&radious;
    int area=3*r*r;
    return area;
}
void printCircumference(int *radious)
{
    int r=&radious;
    int c=2*3*r;
    return c;
}
