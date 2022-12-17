#include<stdio.h>
int main()
{
    int i,n,r,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}