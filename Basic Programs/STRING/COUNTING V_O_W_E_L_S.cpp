#include<stdio.h>
int main()
{
	char s[100];
	int i,count=0,c=0;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
			if(count==0)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			c++;
		}
		if(s[i]==' ')
		{
			count=i;
		}
	}
	for(i=count;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		c++;
	}
	printf("Vowels=%d",c);
}
