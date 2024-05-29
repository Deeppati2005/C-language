#include<stdio.h>
#include<string.h>
void pal(char *s)
{
	char *p=s;
	int len,flag=0;
	len=strlen(s);
	char *q=&s[len-1];
	for(p=s;*p!='\0';p++,q--)
	{
		if(*p!=*q)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
}
int main()
{
	char s[50];
	printf("\nEnter the string:");
	gets(s);
	pal(s);
	
}
