#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
		if(s[i]==' ')
		{
			printf("\n");
		}
	}
}
