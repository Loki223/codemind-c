#include<stdio.h>
int main()
{
    int n,m,add;
    scanf("%d%d",&n,&m);
    if(1 <= n <= 10000 && 1 <= m <= 10000)
    {
        add=n+m;
    }
    printf("%d",add);
}