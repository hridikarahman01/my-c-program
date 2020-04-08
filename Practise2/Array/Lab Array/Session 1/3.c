#include<stdio.h>
#include<ctype.h>

main()
{   int i;
    char ch[10];
    for(i=1;i<=5;i++)
    {
     scanf("%c",&ch[i]);
     getchar();
    }
      printf("%d %d",ch[2],ch[3]);


    if(tolower(ch[5])=='a' || tolower(ch[5])=='e' || tolower(ch[5])=='i' || tolower(ch[5])=='o' || tolower(ch[5])=='u')
        printf("\nVowel");
    else
        printf("\nConsonant");

   printf("\n%c %c %c %c %c",ch[3],ch[1],ch[2],ch[5],ch[4]);

}
