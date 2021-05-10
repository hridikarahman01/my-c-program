#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Input 3 numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a>b)&&(a>c))
    {
        printf("MAX number is %d",a);
    }
    if((b>c)&&(b>a))
    {
        printf("MAX number is %d",b);
    }
    if((c>a)&&(c>b))
    {
        printf("MAX number is %d",c);
    }
    else
    {
        printf("a number should not be used more than 1 time");
    }

    return 0;
}
