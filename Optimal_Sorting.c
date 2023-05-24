#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int a;
        scanf("%d",&a);
        int arr[a];
        for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
    
    int x=0,s=0,c=0;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]>arr[j])
            {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("0
");
    }
    else
    {
        s=arr[a-1]-arr[0];
        printf("%d
",s);
    }
    }
}