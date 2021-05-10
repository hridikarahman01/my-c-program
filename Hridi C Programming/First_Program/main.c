#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printName();
    //doSum();
    myArray();
}
void doSum()
{
    int num1,num2,sum=0;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Sum of %d and %d is %d",num1,num2,sum);
    return 0;

}
void myArray()
{
    int number[5]={2,4,6,8,10},sum=0,i;q
    for(i=0; i<=4; i++)
    {
        sum=sum+number[i];
    }
    printf("Sum of array element is %d",sum);
    return 0;
}
void printName()
{
    char name[10];
    printf("Write your name:");
    scanf("%s",&name);
    printf("Hello %s, How are you?",name);
    return 0;
}
