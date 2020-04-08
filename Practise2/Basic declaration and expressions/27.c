#include<stdio.h>
main()
{
    float n[5];
    int i,s=0,t=0;
    scanf("%f%f%f%f%f",&n[0],&n[1],&n[2],&n[3],&n[4]);
    for(i=0;i<5;i++)
    {
        if(n[i]>0){
            s++;
    }
    else if(n[i]<0)
    {
        t++;
    }
}
    printf("\nNumber of positive numbers: %d",s);
    printf("\nNumber of negative numbers: %d",t);
    return 0;
}
