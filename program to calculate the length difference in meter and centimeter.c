main()
{
    int a,b,c,d,x,y,r,m,n;
    printf("Enter the length of 1st item in meter:\t");
    scanf("%d",&a);
    printf("Enter the length of 1st item in centimeter:\t");
    scanf("%d",&b);
    printf("Enter the length of 2nd item in meter:\t");
    scanf("%d",&c);
    printf("Enter the length of 2nd item in centimeter:\t");
    scanf("%d",&d);

    x=a*100+b;
    y=c*100+d;
    r=x-y;
    m=r%100;
    n=r/100;

    printf("\nResult in meter is %d and result in cm is %d",n,m);
}
