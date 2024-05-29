#include<stdio.h>
int main()
{
	char s[100],t;
	int i,p=0,j;
	printf("\nEnter the String:");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			for(j=i-1;j>=p;j--)
			{
				printf("%c",s[j]);
			}
			printf(" ");
			p=i+1;
		}
	}
			for(j=i-1;j>=p;j--)
			{
				printf("%c",s[j]);
			}
	
}

