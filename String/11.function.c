#include<stdio.h>
#include<string.h>
main()
{
    char str[100];

    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    ascendingOrder(str);
    return 0;
}
void ascendingOrder(char str[100])
{
    int i,j,l;
    char ch;
    l=strlen(str);
    for(i=1; i<l; i++)
        for(j=0; j<l-i; j++)
            if(str[j]>str[j+1])
            {
                ch=str[j];
                str[j]=str[j+1];
                str[j+1]=ch;
            }
    printf("After sorting the string: %s\n",str);
}

