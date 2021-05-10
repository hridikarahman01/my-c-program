#include<stdio.h>
typedef struct
{
    int id;
    char g;
    float ct;
    float mt;
    float ft;
    float ts;
}Student;
int numberOfFail(Student s[], int N)
{
    int k, c=0;
    for (k=0; k<N; k++)
    {
        s[k].ts= s[k].ct + s[k].mt + s[k].ft;
        if(s[k].ts<60)
        {
            c++;
        }
    }
    return c;
}
int highestMark(Student s[], int N)
{
    int j, c=0, id;
    s[0].ts= s[0].ct + s[0].mt + s[0].ft;
    float max = s[0].ts;
    for (j=1; j<N; j++)
    {
        if (max < s[j].ts)
        {
            max=s[j].ts;
            c=j;
        }
    }
    id = s[c].id;
    return id;
}
int main()
{
    int i, N,q;
    int Failed;
    int ID;
    printf("How Many?");
    scanf("%d",&N);
    Student s[N];
    for (i=0; i<N; i++)
    {
        printf("ID: ");
        scanf("%d",&s[i].id);
        scanf("%*c");
        do
        {
            printf("Gender: ");
            scanf("%c",&s[i].g);
            scanf("%*c");
        }
        while (s[i].g!='M' && s[i].g!= 'F');
        printf("Class Test Score: ");
        scanf("%f",&s[i].ct);
        printf("Mid term Score: ");
        scanf("%f",&s[i].mt);
        printf("Final Exam Score: ");
        scanf("%f",&s[i].ft);
    }
    Failed = numberOfFail(s, N);
    ID = highestMark(s, N);
    printf("Number of Students failed: %d\n", Failed);
    printf("ID of Highest Mark Obtainer: %d", ID);
    return 0;
}
