#include<stdio.h>
int main()
{
	char s[100];
	int i,c=0;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i];i++)
	{
		printf("%c",s[i]);
		if(s[i]==32)
		{
			printf("\n");
		}
	}
	
}
