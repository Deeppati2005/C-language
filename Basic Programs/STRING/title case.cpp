#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	typedef char character;
	character s[100];
	int i;
	printf("\nEnter the string:");
	gets(s);
	s[0]=toupper(s[0]);
	for(i=1;s[i];i++)
	{
		if(s[i]==32)
		s[i+1]=toupper(s[i+1]);
	}
	puts(s);
}
