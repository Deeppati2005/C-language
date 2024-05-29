#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,c1=0,c2=0;
	printf("\nEnter the string:");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=tolower(s[i]);
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			c1++;
		}
		else
		{
			if(s[i]!=32)
			c2++;
		}
	}
	printf("\nVowels=%d\nConsonant=%d",c1,c2);
}
