
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20];
    scanf("%s",ch);
    int x=0,y=0;
    int n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='z')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}