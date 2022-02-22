#include<stdio.h>
int factorial(int o)
{
    int i,mul=1;
    for(i=o;i>=1;i--)
    {
        mul=mul*i;
    }
    return mul;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int num=n,rem,fact,sum=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        fact=factorial(rem);
        sum=sum+fact;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}