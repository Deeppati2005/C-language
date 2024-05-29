#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i;
	printf("\n Enter a string:");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(isupper(s[i]))
		s[i]=tolower(s[i]);
		else
		s[i]=toupper(s[i]);
	}
	puts(s);
}
