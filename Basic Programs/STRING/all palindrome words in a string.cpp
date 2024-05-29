#include<stdio.h>
#include<string.h>
#include<ctype.h>
int palindrome(char c[])
{
	char n[50];
	strcpy(n,c);
	strrev(c);
	if(strcmpi(c,n)==0)
	return 1;
	else
	return 0;
}
int main()
{
	char s[100],tmp[20];
	int i,j=0;
	printf("\nEnter a string:");
	gets(s);
	strcat(s," ");
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]!=32)
		tmp[j++]=s[i];
		else
		{
			tmp[j]='\0';
			if(palindrome(tmp))
			puts(tmp);
			j=0;
		}
	}
}
