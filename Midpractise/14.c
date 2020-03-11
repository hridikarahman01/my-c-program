main()
{
    float n;
    char g;
    scanf("%f",&n);
    if(n>=90)
        g='A';
    else if(n>=80)
        g='B';
    else if(n>=70)
        g='C';
    else if(n>=60)
        g='D';
    else
        g='F';
        printf("Grade is: %c",g);
}
