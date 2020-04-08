#include<stdio.h>
main()
{
    int i,s=0,t=0;
    float n[5],avg;
    scanf("%f%f%f%f%f",&n[0],&n[1],&n[2],&n[3],&n[4]);
    for(i=0; i<5; i++)
    {
        if(n[i]>0)
        {
            s++;
            t=t+n[i];

        }
        avg=t/s;
    }
    printf("\nPositive numbers: %d",s);
    printf("\nAverage: %.2f",avg);
}
