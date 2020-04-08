#include<stdio.h>
main()
{
    int i,a[11],b;
    for(i=0;i<11;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[5]%2==0)
        printf("Middle element is: Even");
    else
        printf("Middle element is: Odd");

        b=a[0];
        a[0]=a[10];
        a[10]=b;
    printf("\n Interchange : 1st digit: %d 2nd digit: %d",a[0],a[10]);

    for(i=0;i<11;i++)
    if(i%2==0){
        printf("\n%d",a[i]);
}
}
