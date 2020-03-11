main()
{
    int n,m,i=1,sum=0;
    scanf("%d",&n);
    printf("Even numbers are:");
    while(i<=n)
    {
        m=2*i;
        printf("\n %d",m);
        sum=sum+m;
        i++;
    }
    printf("\n Sum is: %d",sum);
}

