#include<stdio.h>
int main()
{
    int n,m,mul;
    scanf("%d%d",&m,&n);
    if(1<=n<=10000 && 1<=m<=10000)
    {
        mul=n*m;
    }
    printf("%d",mul);
}