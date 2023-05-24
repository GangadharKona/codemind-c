#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int c1=0,c2=0,s=0;
    double avg=0;
    for(int i=0;i<n;i++)
    {
        c1=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j&&x[i]!=0)
            {
                if(x[i]==x[j])
                {
                    c1++;
                    x[j]=0;
                }
            }
        }
        if(c1==x[i])
        {
            s=s+x[i];
            c2++;
        }
    }
    if(c2==0)
    {
        printf("-1");
    }
    else
    {
        avg=s/(c2*1.0);
        printf("%.2lf",avg);
    }
    
}