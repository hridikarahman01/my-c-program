main()
{
    int a,b,c,sum,average;
    printf("Enter subject 1 mark:");
    scanf("%d",&a);
    printf("Enter subject 2 mark:");
    scanf("%d",&b);
    printf("Enter subject 3 mark:");
    scanf("%d",&c);
    sum=a+b+c;
    average=(a+b+c)/3;
    printf("The total is %d+%d+%d=%d",a,b,c,sum);
    printf("\nAverage is %d",average);
}
