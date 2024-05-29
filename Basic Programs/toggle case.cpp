#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[50];
	int i,j;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(isupper(s[i]))
		{
			s[i]=tolower(s[i]);
		}
		else
		{
			s[i]=toupper(s[i]);
		}
	}
	puts(s);
}
