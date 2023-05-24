#include<stdio.h>
#include<string.h>


int main()
{ 
    char s[100],s1[100]; 
    scanf("%s",s); 
    strcpy(s1,s);
    int length=strlen(s);
    int i;
    for(i=0;i<length;i+=2)
    {
        int v=s[i];
        int a=(v-(s[i+1]-'0'));
        char b=(char)(a%26+97);
        s1[i+1]=b;
    }
    printf("%s",s1);
    return 0; 
}
