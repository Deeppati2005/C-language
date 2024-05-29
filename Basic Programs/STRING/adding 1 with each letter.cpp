#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,j;
	printf("\nEnter the string:");
	gets(s);
	strupr(s);
	for(i=0;s[i];i++)
	{
		if(isalpha(s[i]))
		{
			s[i]=s[i]+1;
		}
		if(s[i]==91)
		s[i]='A';
	}
	puts(s);
}
