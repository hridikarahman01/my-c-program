main()
{
    char a[10];
    int b;
    double c,salary;
    printf("Input the Employees Id(Max 10 char):");
    scanf("%s",&a);

    printf("\nInput the working hours:");
    scanf("%d",&b);

    printf("\nSalary amount pr/hr:");
    scanf("%lf",&c);

    salary = b*c;

    printf("\nSalary = %.2lf",salary);
    return 0;
}
