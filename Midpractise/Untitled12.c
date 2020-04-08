main()
{
    int n,i,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter number %d : ",i);
        scanf("%d",&n);
        if(n<0)
        {
           continue;
        }
        sum=sum+n;

    }
    printf("%d",sum);
}
