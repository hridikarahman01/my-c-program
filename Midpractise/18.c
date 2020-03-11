main()
{
    int a,d;
    printf("Enter your amount:");
    scanf("%d",&a);
    if(a<=5000)
        d=a*5/100;
    else if(a<=10000)
        d=5000*5/100+(a-5000)*10/100;
    else
        d=5000*5/100+5000*10/100+(a-10000)*20/100;
    a=(a-d);
    printf("\nPayment is: %d",a);
}
