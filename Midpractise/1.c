main()
{
    int a,b,c,max,min,s;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        max=a;
    else if(b>a && b>c)
        max=b;
        else
            max=c;
            if(a<b && a<c)
                min=a;
            else if(b<a && b<c)
                min=b;
            else
                min=c;
                s=a+b+c-(max+min);

    printf("s= %d",s);
}
