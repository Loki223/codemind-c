#include<stdio.h>
int main()
{
    int n,diagonal;
    scanf("%d",&n);
    if(n>2)
    {
        diagonal=n*(n-3)/2;
        printf("%d",diagonal);
    }
}