main()
{
    int n,m,i=1,sum=0;
    scanf("%d",&n);
    while(i<=n)
    {
        m=2*i-1;
        printf("\n %d",m);
        sum=sum+m;
        i++;
    }
    printf("\n%d",sum);
}
