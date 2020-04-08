#include<stdio.h>
main()
{
    int s,H,M,S;
    printf("Input seconds:");
    scanf("%d",&s);
    H=s/3600;
    M=(s%3600)/60;
    S=s-((H*3600)+(M*60));
    printf("H:M:S- %d:%d:%d",H,M,S);
}
