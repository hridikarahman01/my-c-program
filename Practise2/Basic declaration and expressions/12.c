#include<stdio.h>
main()
{
    char id[10];
    int workinghour, salary,totalsalary;
    printf("Enter employee id: ");
    scanf("%c",&id);
    printf("Total working hour: ");
    scanf("%d",&workinghour);
    printf("Salary per hour: ");
    scanf("%d",&salary);
    printf("%c\n",id);
    totalsalary=employeeSalary(workinghour,salary);
    printf("%d",totalsalary);
}
int hour,salary;
int employeeSalary(hour, salary)
{
    return hour*salary;
}
