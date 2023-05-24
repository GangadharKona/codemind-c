#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int ls=0,rs=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            ls=0;
            for(int j=0;j<i;j++)
            {
                ls+=arr[j];
            }
            rs=0;
            for(int j=i+1;j<n;j++)
            {
                rs+=arr[j];
            }
            if(ls==rs)
            {
                f=1;
                break;
            }
        }
        if(f==1){
            printf("YES
");
        }
        else{
            printf("NO
");
        }
    }
}