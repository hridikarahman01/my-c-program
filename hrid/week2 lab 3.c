main()
{
    float a,b,c,sum,average;
    printf("Enter subject 1 mark:");
    scanf("%f",&a);
    printf("Enter subject 2 mark:");
    scanf("%f",&b);
    printf("Enter subject 3 mark:");
    scanf("%f+%f=%f",&a,&b,&c);
    sum = a+b+c;
    printf("The total is .0%f\n",a,b,c,sum);

    average = (a+b+c)/3;
    printf("Average .2%f",average);
    return 0;

}
