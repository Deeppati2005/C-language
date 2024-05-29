#include<stdio.h>
int main()
{
	char s[100];
	int f=0;
	char *p=s,*p1=s;
	printf("\n Enter the string:");
	scanf("%s",&s);
	while(*p!=NULL)
	{
		p++;
	}
	p--;
	while(p1<p)
	{
		if(*p1!=*p)
		{
			f=1;
			break;
		}
		p1++;
		p--;
	}
	if(f==0)
	printf("\n palindrome");
	else
	printf("\n not");
}

