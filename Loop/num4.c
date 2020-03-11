main()
{
    int i,n,sum=0;
    float avg;
    printf("Input the 10 numbers: \n");
    for(i=1; i<=10; i++)
    {
        printf(" number- %d :",i);
        scanf("%d",&n);
        sum=sum+n;
    }
        avg=sum/10.0;


       printf("The sum is %d",sum);
       printf("\nThe average is %.1f",avg);
}
