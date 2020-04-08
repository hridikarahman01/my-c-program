void downward(int n)
{
    int i;
    for(i=n; i>=1; i--)
        if(i%2==0)
        {
            printf("\n%d",i);
        }
}
int main()
{
    int n;
    scanf("%d",&n);
    downward(n);
}



