#include<stdio.h>
int main()
{
    int n,m,divi;
    scanf("%d%d",&n,&m);
    if(1 <= n <= 10000 && 1 <= m <= 10000)
    {
        divi=n/m;
    }
    printf("%d",divi);
}