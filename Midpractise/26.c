main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    printf("Natural numbers are:");
    while(i<=n)
    {
        printf("\n%d",i);
        sum=sum+i;
        i++;
    }

    printf("\n Sum is: %d",sum);
}
