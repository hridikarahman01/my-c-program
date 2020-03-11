main()
{
    float a,b,c,sum,average;
    printf("Enter subject 1 mark:");
    scanf("%f",&a);
    printf("Enter subject 2 mark:");
    scanf("%f",&b);
    printf("Enter subject 3 mark:");
    scanf("%f",&c);

    sum=a+b+c;
    average=(a+b+c)/3;

    printf("The total is %.0f+%.0f+%.0f=%.0f",a,b,c,sum);
    printf("\nAverage is %.2f",average);
}
