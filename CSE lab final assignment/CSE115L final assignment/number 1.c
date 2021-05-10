#include <stdio.h>
typedef struct
{
    int model;
    float p_speed;
    int ram;
    int hdd;
    float price;
} personalComputer;

int processorSpeed(personalComputer pc[], int n)
{
    int j, c=0;

    for (j=0; j<n; j++)
    {
        if (pc[j].p_speed >= 2.4)
        {
            c++;
        }
    }
    return c;
}

float cheapestPrice(personalComputer pc[],int n)
{
    float min;
    int i;

    min = pc[0].price;

    for(i=1; i<n; i++)
    {
        if (min > pc[i].price)
            min = pc[i].price;
    }
    return min;
}

int main()
{
    int i,n;
    int ps;
    float cp;

    printf("Enter the Number of PC Models: ");
    scanf("%d",&n);

    personalComputer pc[n];

    for(i=0; i<n; i++)
    {
        printf("\nEnter the Model Number: ");
        scanf("%d",&pc[i].model);

        printf("Enter the Speed of the Processor (gigahertz): ");
        scanf("%f",&pc[i].p_speed);

        printf("Enter the amount of RAM (megabyte): ");
        scanf("%d",&pc[i].ram);

        printf("Enter the size of the Hard disk (gigabyte): ");
        scanf("%f",&pc[i].hdd);

        printf("Enter the Price of the Model: ");
        scanf("%f",&pc[i].price);

        printf("\n");
    }

    ps= processorSpeed(pc,n);

    cp= cheapestPrice(pc,n);

    printf("\nNumber of Models having a Processor Speed of at least 2.4GHz: %d\n",ps);

    printf("\nPrice of the Cheapest Model: %.2f\n",cp);
}
