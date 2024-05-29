#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,k,l;
	printf("\nEnter the string:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==s[i+1])
		{
			for(j=i;j<l-1;j++)
			{
				s[j]=s[j+1];
			}
			l--;
		}
	}
	s[l+1]='\0';
	puts(s);
}
