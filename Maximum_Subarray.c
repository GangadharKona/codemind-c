#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=-1000;
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=i;j<n;j++)
        {
            s+=arr[j];
            if(max<s)
            {
                max=s;
            }
        }
    }
    printf("%d",max);
}