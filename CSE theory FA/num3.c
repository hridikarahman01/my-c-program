#include<stdio.h>
#include<string.h>

void main()
{
    ulala(5);
}
void ulala(int n)
{

    if(n!=0)
    {
        ulala(n/2);
        printf("%d",n%2);
    }
}
