#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count+=1;
            }
        }
        if (count<2)
        {
            printf("%d",a[i]);
        }
    }
    
}
