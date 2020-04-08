main()
{
    int n[5],i;
    char g;
    for(i=0;i<5;i++)


    {
        scanf("\n%d",&n[i]);
        if(n[i]>=90)
        g='A';
        else if(n[i]>=80)
            g='B';
        else
            g='F';
            printf("%c\n",g);

    }

}
