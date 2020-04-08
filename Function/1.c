#include<stdio.h>
int addNum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}
void main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=addNum(a,b);
    printf("%d",c);
}
