main()
{
    int i,n,sum=0;
    printf("Input value:");
    scanf("%d",&n);
    printf("\nThe first %d natural number is:",n);

    for(i=1; i<=n; i++)
    {
        printf(" %d",i);
        sum=sum+i;
    }
    printf("\n The sum is %d",sum);

}
