main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/100; //1
    c=a%100; //23
    d=c/10; //2
    e=c%10; //3

    printf("%d%d%d",e,d,b);
}
