main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%5==0 || a%7!=0)
        printf("Yes");
    else
        printf("No");
}
