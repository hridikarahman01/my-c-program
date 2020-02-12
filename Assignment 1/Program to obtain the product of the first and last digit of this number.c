main()
{
    int a,b,n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n%10;
    b=n/1000;
    s=a*b;
    printf("%d",s);
}
