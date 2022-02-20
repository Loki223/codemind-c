#include<stdio.h>
int prime(int m)
{
    int c=0,j;
    for(j=1;j<=m;j++)
    {
        if(m%j==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 0;
    }
    else
    {
    return 1;
    }
}
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i)==1)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}