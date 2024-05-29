#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int count[26]={0},i,x;
	printf("\nEnter the string:");
	gets(s);
	strupr(s);
	puts(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(isalpha(s[i]))
		{
			x=s[i]-65;
			count[x]++;
		}
	}
	printf("\nCharacter \t Frequency");
	for(i=0;i<26;i++)
	{
		if(count[i]!=0)
		printf("\n%c \t\t %d",65+i,count[i]);
	}
	
}
