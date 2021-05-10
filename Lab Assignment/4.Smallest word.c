#include<stdio.h>
void main()
{
    char a[100],small[20],temp[20];
    int i,j,k=0,c=0,p=0,q=0,m,n;
    printf("enter the string:\n");
    gets(a);
    n=strlen(a);
    for(i=0; i<=n; i++)
    {
        if(a[i]==' '||a[i]=='\0')
        {
            for(j=c; j<i; j++)
            {
                temp[k]=a[j];
                if(c==0)
                {
                    small[k]=a[j];
                }
                k++;
            }
            m=i-c;
            if(c==0)
            {
                p=m;
                q=m;
            }
            else if(m<p)
            {
                for(j=0; j<m; j++)
                {
                    small[j]=temp[j];
                }
                p=m;
            }

            k=0;
            c=i+1;
        }
    }
    printf("The smallest word: ");
    for(i=0; i<p; i++)
    {
        printf("%c",small[i]);
    }

    return 0;
}
