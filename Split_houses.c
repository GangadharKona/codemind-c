#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[100];
    scanf("%s",a);
    int c=0;
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='.')
        {
            c++;
        }
    }
    if(c>n/2)
    {
        printf("YES
");
        for(int i=0;i<l;i++)
        {
            if(a[i]=='.')
            {
                printf("B");
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
    else
    {
        printf("NO");
    }
}