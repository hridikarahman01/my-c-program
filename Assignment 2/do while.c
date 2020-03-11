main()
{
    int n,a,r,s=0;
    scanf("%d",&n);
    a=n;
    do
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    while(n>0);
    if(a==s)
    {
        printf("%d is a palindrome",a);
    }
    else
    {
        printf("%d is not palindrome",a);
    }
}
