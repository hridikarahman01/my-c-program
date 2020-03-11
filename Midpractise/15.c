main()
{
    int y;
    scanf("%d",&y);
    if(((y%4)==0) && ((y%100)!=0) && ((y%4)==0))
        printf("\nLeap Year",y);
    else
        printf("\nNot Leap Year",y);
}
