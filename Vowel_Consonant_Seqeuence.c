#include<stdio.h>
#include<string.h>

int chek(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[100000];
    scanf("%s",s);
    int len=strlen(s);
    int t;
    if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
    {
        printf("V");
        t=0;
    }
    else
    {
        printf("C");
        t=1;
    }
    for(int i=1;i<len;i++)
    {
        if(t==1)
        {
            if(chek(s[i]))
            {
                printf("V");
                t=0;
            }
        }
        else if(t==0)
        {
            if(!chek(s[i]))
            {
                printf("C");
                t=1;
            }
        }
    }
}