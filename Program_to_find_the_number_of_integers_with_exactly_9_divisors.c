#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==9)
        {
            sum++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",sum);
}