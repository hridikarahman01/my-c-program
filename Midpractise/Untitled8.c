main()
{
    int a,d;
    scanf("%d",&a);
    if(a<=5000)
        d=a*5/100;
    else if(a>5000 && a<=15000)
        d=5000*5/100+(a-5000)*10/100;
    else
        d=5000*5/100+15000*10/100+(a-5000)*20/100;
    a=a-d;
    printf("%d",a);
}