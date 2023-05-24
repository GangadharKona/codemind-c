#include<stdio.h>
int main()
{
    long int n,i,sum=0;
    scanf("%ld",&n);
    long int lug[n],t,cost[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&lug[i]);
    }
    scanf("%ld",&t);
    for(i=0;i<n;i++)
    {
        if(lug[i]>t)
        {
            cost[i]=2;
        }
        else
        {
            cost[i]=1;
        }
        sum=sum+cost[i];
    }
    printf("%ld",sum);
    return 0;
}
