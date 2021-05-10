#include<stdio.h>
typedef struct
{
    char n[50];
    int a;
    float h;
    char g;
} movieStar;
float highestEarning(movieStar m[], int N)
{
    int j;
    float max= m[0].h;
    for (j=1; j<N; j++)
    {
        if (max < m[j].h)
        {
            max=m[j].h;
        }
    }
    return max;
}
int youngestAge(movieStar m[], int N)
{
    int min= m[0].a;
    int k;
    for(k=1; k<N; k++)
    {
        if (m[k].a < min)
        {
            min= m[k].a;
        }
    }
    return min;
}
int main()
{
    int i, N;
    float HighestSalary;
    int Youngest;
    printf("Enter number of Movie Stars: ");
    scanf("%d",&N);
    scanf("%*c");
    movieStar m[N];
    for (i=0; i<N; i++)
    {
        printf("\nName: ");
        gets(m[i].n);
        printf("Age: ");
        scanf("%d", &m[i].a);
        printf("Annual Income: ");
        scanf("%f", &m[i].h);
        scanf("%*c");
        do
        {
           printf("Gender (For Male enter 'M' and for Female enter 'F'):  ");
           scanf("%c", &m[i].g);
           scanf("%*c");
        } while (m[i].g!='M' && m[i].g!= 'F');

        HighestSalary= highestEarning(m, N);
        Youngest= youngestAge(m, N);}
        printf("\nHighest Annual Income: %0.2f\n", HighestSalary);
        printf("Youngest Age: %d", Youngest);
        return 0;
}
