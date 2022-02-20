#include<stdio.h>
int main()
{
    float f1,f2,pro;
    scanf("%f",&f1);
    scanf("%f",&f2);
    if(1<=f1<=10000&&1<=f2<=10000)
    {
        pro=f1*f2;
        printf("%0.2f",pro);
    }
}