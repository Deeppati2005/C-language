#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *s,s1[100];
	printf("\nEnter the string:");
	gets(s1);
	s=(char *)malloc(strlen(s1));
	strcpy(s,s1);
	strrev(s1);
	if(strcmpi(s,s1)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	
}
