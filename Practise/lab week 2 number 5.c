main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    a=b;
    b=c;
    a=d;

    printf("%d%d%d",&c,&b,&a);
}
