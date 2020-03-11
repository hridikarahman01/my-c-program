#include<stdio.h>
main()
{
    int a,n,c,i,t,s;
    printf("a:");
    scanf("%d",&a);
    printf("n:");
    scanf("%d",&n);
    s=1;
    t=1;
    for(i=1; i<=n; i++)
    {
        t=t*a;
        s=s+t;
    }
    printf("%d",s);

}
