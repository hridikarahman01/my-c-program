main()
{
    int a,b,c,max,min,s;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        max=a;
    else if(b>a && b>c)
        max=b;
    else if(c>a && c>b)
        max=c;
    printf("\nMax: %d",max);
    if(a<b && a<c)
        min=a;
    else if(b<a && b<c)
        min=b;
    else if(c<a && c<b)
        min=c;
    printf("\nMinimum: %d",min);
    s=a+b+c-(max+min);
    printf("\nSecond largest is: %d",s);
}
