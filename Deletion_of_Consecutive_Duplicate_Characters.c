#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        char a[100];
        int j,c=0,count=0;
        scanf("%s",a);
        for(j=0;a[j]!=NULL;j++)
        {
            c++;
        }
        for(j=0;j<c-1;j++)
        {
            if(a[j]==a[j+1])
            {
                count++;
            }
        }
        printf("%d
",count);
    }
}