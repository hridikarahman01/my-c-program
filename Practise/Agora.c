void main()
{
    int a,price;
    print("Please input price of product: ");
    scanf("%d",&a);
    if(a<=5000)
    {
        price=(a-(a*5)/100);
    }
    else if((a>5000) && (a<=10000))
    {
        price=(a-(a*10)/100);
    }
    else
    {
        price=(a-(a*20)/100);
    }
    printf("Price after discount: %d",price);
}
