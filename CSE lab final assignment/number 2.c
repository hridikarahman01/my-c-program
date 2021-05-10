
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],ch;
    int i,length,v=0,space;
    printf("Enter a sentence: ");
    gets(s);
    length=strlen(s);
    for (i=0; i<length; i++)
    {
        ch=s[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            v++;
        }
        else if(ch==' ')
        {
            space++;
        }
        else
        {
            printf("First consonant of the sentence is: %c ", ch);
            break;
        }
    }
    printf("\nAll vowels are:\n");
    for (int i = 0; i < strlen(s); i++)
    {
        char letter = s[i];
        for (int c = 0; c < strlen(s); c++)
        {
            if ((letter== 'a') || (letter=='e') || (letter=='i') || (letter=='o') || (letter=='u') || (letter=='A') || (letter=='E') || (letter=='I') ||
                    (letter=='O') || (letter=='U'))
                printf("%c\n", letter);
            break;
        }
    }
}
