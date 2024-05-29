#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[50];
	int i,j;
	printf("\nEnter the string:");
	gets(s);
	strlwr(s);
	s[0]=toupper(s[0]);
	for(i=0;s[i];i++)
	{
		if(s[i]==32)
		{
			s[i+1]=toupper(s[i+1]);
		}
	}
	puts(s);
}
