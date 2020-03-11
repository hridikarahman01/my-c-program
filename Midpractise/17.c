main()
{
    char ch;
    scanf("%c",&ch);
    ch=toupper(ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}
