#include<stdio.h>
main()
{
    int a=6,b=3;
    int *a_p=&a,*b_p=&b;
    printf("a_p %d\n",a_p);
    printf("b_p %d\n",b_p);
    a=b+*a_p;
    printf("a %d\n",a);
    a_p=b_p;
    printf("a_p %d\n",a_p);
    b=(*a_p)*(*b_p);
    printf("b %d\n",b);
    *b_p=a/b;
    printf("b_p %d\n",b_p);
    *a_p=a%b;
    printf("a_p %d\n",a_p);
    return 0;
}
