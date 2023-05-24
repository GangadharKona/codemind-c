#include<stdio.h>
void sort(int *arr,int a)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,a);
    if(a%2!=0)
    {
        for(i=a-1;i>=1;i-=2)
        {
            if(i==2)
            {
                printf("%d %d ",arr[i-1],arr[i]);
            }
            else
            {
                printf("%d %d ",arr[i-1],arr[i]);
            }
        }
        printf("%d",arr[0]);
    }
    else
    {
        for(i=a-1;i>=0;i-=2)
        {
            printf("%d %d ",arr[i-1],arr[i]);
        }
    }
}
