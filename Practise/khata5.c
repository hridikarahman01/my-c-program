main()
{
    int n,r,a,b,c,d;
    scanf("%d",&a);

    a=n%10;
    n=n/1000;

    b=n%10;
    n=n/100;

    c=n%10;
    n=n/10;

    r=a*1000+b*100+c*10+d;
    printf("%d",r);

}
