#include<stdio.h>
int main()
{
    int n,m,modul;
    scanf("%d%d",&n,&m);
    if(1 <= n <= 10000 && 1 <= m <= 10000)
    {
        modul=n%m;
    }
    printf("%d",modul);
}