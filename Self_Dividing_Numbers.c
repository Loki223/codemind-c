#include<stdio.h>
int main()
{
    int n1,n2,i,num,count=0,sum=0,rem;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        int num=i;
        int count=0;
        int sum=0;
        while(num>0)
		{
		    rem=num%10;
            num=num/10;
            sum=sum+1;
            if(rem!=0 && i%rem==0)
            {
                count+=1;
            }
        }
        if (count==sum)
        {
            printf("%d ",i);
        }
    }
}