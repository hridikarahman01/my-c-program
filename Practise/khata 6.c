main()
{
    float b,r,b1;
    int n;
    printf("Main balance:");
    scanf("%f",&b);
    printf("Rate:");
    scanf("%f",&r);
    printf("How many years:");
    scanf("%d",&n);

    r=r/100;
    b1=b*r+b;

    printf("%.2f",b1);

}
