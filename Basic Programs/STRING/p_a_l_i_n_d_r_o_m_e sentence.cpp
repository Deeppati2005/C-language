#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],t[100];
	int i,j,k;
	printf("\nEnter the string:");
	gets(s);
	strlwr(s);
	strrev(s);
	strcpy(t,s);
	strrev(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==32)
		{
			for(j=i;s[j];j++)
			{
				s[j]=s[j+1];
			}
		}
	}
	for(i=0;t[i]!='\0';i++)
	{
		if(t[i]==32)
		{
			for(j=i;t[j];j++)
			{
				t[j]=t[j+1];
			}
		}
	}
	if(strcmpi(s,t)==0)
	{
		printf("Palindrome Sentence");
	}
	else
	{
		printf("Not a Palindrome Sentence");
	}
	
}
