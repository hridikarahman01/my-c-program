main()
{
    int h;
    float s;
    scanf("%d",&h);
    if(h<=40)
        s=h*10;
    else
        s=(h-40)*15+40*10;
    printf("%.1f",s);
}
