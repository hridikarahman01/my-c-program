void swapNumber(int *x, int *y, int *z)
{
    int t;
    t=*x;
    *x=*z;
    *z=*y;
    *y=t;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    swapNumber(&a,&b,&c);
    printf("%d%d%d",a,b,c);
}
