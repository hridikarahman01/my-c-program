main()
{
    int a[5],i,sum=0;
    float avg=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/5;


    }
    printf("%.2f",avg);
}
