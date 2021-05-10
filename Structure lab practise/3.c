#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct Student {
    int ID;
    int mark1,mark2;
    char grade1,grade2;
};

char calcGrade(int mark) {
    if(mark>=90) return 'A';
    if(mark>=80) return 'B';
    if(mark>=70) return 'C';
    if(mark>=60) return 'D';
    return 'F';
}

int main()
{
    int n,i,j,timeDiff,hourDiff,minuteDiff;

    struct Student student;

    printf("Enter ID of student: ");
    scanf("%d",&student.ID);
    printf("Mark of subject1: ");
    scanf("%d",&student.mark1);
    printf("Mark of subject2: ");
    scanf("%d",&student.mark2);

    student.grade1 = calcGrade(student.mark1);
    student.grade2 = calcGrade(student.mark2);

    printf("\nThe student got %c in subject1 and %c in subject2\n", student.grade1, student.grade2);

    return 0;
}
