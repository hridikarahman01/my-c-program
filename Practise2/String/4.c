#include<stdio.h>

int main()
{
    int n,i,x,len1=0,len2=0,hasSmall=0,hasCapital=0,hasSymbolDigit=0;
    char c,ch1[105],ch2[105];

    printf("Enter string: ");
    for(i=0; ;i++) {
        scanf("%c",&c);
        if(c=='\n') break;
        ch1[len1++]=c;
    }
    ch1[len1]='\0';

    for(i=0;i<len1;i++) {
        c = ch1[i];

        if(c==' ') continue;

        if(c>='a' && c<='z') {
            hasSmall = 1;
        }
        else if(c>='A' && c<='Z') {
            hasCapital = 1;
        }
        else {
            hasSymbolDigit = 1;
        }
    }

    if(len1>=6 && hasSmall==1 && hasCapital==1 && hasSymbolDigit==1)
        printf("VALID PASSWORD\n");
    else
        printf("INVALID PASSWORD\n");


    return 0;
}
