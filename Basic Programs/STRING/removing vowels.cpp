#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,k;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		for(j=i;s[j];j++)
		{
			s[j]=s[j+1];
		}
	}
	puts(s);
}
