main()
{
    int x,y,z;
    printf("Input a digit in x\n");
    scanf("%d",&x);
    printf("Input a digit in y\n");
    scanf("%d",&y);
    z=y;
    y=x;
    x=z;
    printf("x=%d and y=%d",x,y);
}
