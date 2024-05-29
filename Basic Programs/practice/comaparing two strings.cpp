#include<stdio.h>
#include<string.h>
int compare(char s[],char p[])
{
	int c;
	c=strcmp(s,p);
	if(c>0)
	{
		return 1;
	}
	else if(c<0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char s[100],p[100];
	int c;
	printf("\nEnter the 1st string:");
	gets(s);
	printf("\nEnter the 2nd string:");
	gets(p);
	c=compare(s,p);
	if(c==1)
	{
		printf("1st string is greater than the 2nd string");
	}
	else if(c==-1)
	{
		printf("1st string is lesser than the 2nd string");
	}
	else if(c==0)
	{
		printf("1st string is equal to the 2nd string");
	}
	
}
