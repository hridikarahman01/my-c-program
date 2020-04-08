main()
{
    int n,i=1,x;
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
    {
        i=pow(x,n);
        printf("%d",i);
    }
}
