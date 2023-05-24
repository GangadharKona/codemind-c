#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(n==1)
        {
            if(x%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else if(x%2==0)
        {
            printf("Impossible
");
        }
        else if(n%2==0)
        {
            printf("Even
");
        }
        else
        {
            printf("Odd
");
        }
    }
}
