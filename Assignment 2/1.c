main()
{
    int n,a,sum=0,i;
    printf("a:");
    scanf("%d",&a);
    printf("n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=pow(a,i);
    }

        printf("The sum is:%d",sum);

}
