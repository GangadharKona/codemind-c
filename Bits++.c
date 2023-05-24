#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        char s[1000];
        scanf("%s",s);
        int l=strlen(s);
        if(s[0]=='+' || s[l-1]=='+')
        {
            sum=sum+1;
        }
        if(s[0]=='-'||s[l-1]=='-')
        {
            sum=sum-1;
        }
    }
    printf("%d",sum);
}