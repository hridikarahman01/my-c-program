main()
{
    int i,sum;
    sum=0;
    printf("The first 10 natural numbers are:");
    for(i=1; i<=10; i++)
    {
        sum=sum+i;
        printf("%d ",i);
    }

    printf("\nThe sum is %d",sum);
}
