main()
{
    int a,b,x;
    printf("Enter 1st numbers:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);

    x=b;
    b=a;
    a=x;

    printf("Inverse number: %d%d",a,b);
}
