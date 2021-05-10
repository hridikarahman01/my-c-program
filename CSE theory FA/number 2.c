#include<stdio.h>
#include<string.h>
int main() {
    char s1[30] = "Twin";
    char s2[30] = "little ";
    char s3[30] = "kle ";
    char s4[30] = "star.";
    char s5[30];
    printf(strcat (s1, s3));
    printf("\n");
    printf(strcpy(s5,""));
    printf("\n");
    printf(strcat(s2, s4));
    printf("\n");
    printf(strcat(s1, s2));
    printf("\n");
    printf(strncat(s5, s1,8));
    printf("\n");
    printf(strcat(s5, s1));
    printf("\n");
    printf(strupr(s5));
    printf("\n");
    return 0;
}
