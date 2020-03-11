main()
{
    int a,b,c;
    printf("input a number:");
    scanf("%d",&a);
    printf("input another number:");
    scanf("%d",&b);

    c=b;
    b=a;
    a=c;
    printf("inverse : %d%d",a,b);
}
