#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100],tmp[50];
	int i,j,sum=0,x=0;
	printf("\nEnter the string:");
	gets(s);
	gets(tmp);
	if(strlen(s)==strlen(tmp))
	{
		for(i=0;i<strlen(s);i++)
		{
			sum+=s[i];
			x+=tmp[i];
		}
	
		if(sum==x)
		{
			printf("\nAnagram words");
		}
		else
		{
			printf("\nLengths are same but not Anagram");
		}
	}
	else
	{
		printf("\nNot Anagram");
	}
}
