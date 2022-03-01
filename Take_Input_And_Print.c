#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    fgets(s,100000,stdin);
    printf("%s",s);
}