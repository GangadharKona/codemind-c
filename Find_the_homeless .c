#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int c,count=0;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]<=b[j])
            {
                
                b[j]=0;
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            count++;
        }
    }
    printf("%d",count);
}
