#include<stdio.h>
int main()
{
	char str[100];
	int i,j,vc=1;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ')
		{
			vc++;
		}
	}
	printf("%d",vc);
}