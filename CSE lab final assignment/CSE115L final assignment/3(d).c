#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    int i, ch=0;

    printf("Enter the First word: ");
    gets(s1);

    printf("\nEnter the Second word: ");
    gets(s2);

    if(strlen(s1) != strlen(s2))
    {
        printf("NO");
    }
    else if (strlen(s1) == strlen(s2))
    {
        for(i=0; i<strlen(s1); i++)
        {
            if(s1[i] >= 'A' && s1[i] <= 'Z')
            {
                s1[i]= s1[i] + 32;
            }

            if(s2[i] >= 'A' && s2[i] <= 'Z')
            {
                s2[i]= s2[i] + 32;
            }

            if(s1[i] == s2[i])
            {
                ch++;
            }
        }
        if (ch == strlen(s1))
        {
            printf("Yes\n");
        }
        else if (ch <strlen(s1))
        {
            printf("No\n");
        }
    }
}
