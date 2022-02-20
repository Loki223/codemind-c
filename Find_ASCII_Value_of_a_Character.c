#include<stdio.h>
int main()
{
    char str[10];
    scanf("%s",str);
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        printf("%d",str[i]);
    }
}