#include<stdio.h>
typedef struct
{
    char n[50];
    int a;
    float ai;
    char g;
} movieStar;
float highestEarning(movieStar m[], int N)
{
    int j;
    float max= m[0].ai;
    for (j=1; j<N; j++)
    {
        if (max < m[j].ai)
        {
            max=m[j].ai;
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
    float Highest;
    int Youngest;
    printf("How Many?");
    scanf("%d",&N);
    scanf("%*c");
    movieStar m [N];
    for (i=0; i<N; i++)
    {
        printf("\nName: ");
        gets(m[i].n);
        printf("Age: ");
        scanf("%d", &m[i].a);
        printf("Annual Income: ");
        scanf("%f", &m[i].ai);
        scanf("%*c");
        do
        {
           printf("Gender: ");
           scanf("%c", &m[i].g);
           scanf("%*c");
        } while (m[i].g!='M' && m[i].g!= 'F');

        Highest= highestEarning(m, N);
        Youngest= youngestAge(m, N);}
        printf("Highest Annual Income: %f", Highest);
        printf("Youngest Age: %d", Youngest);
        return 0;
}
