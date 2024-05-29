#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,k,l;
	printf("\nEnter the string:");
	gets(s);
	printf("\nEnter the encode:");
	scanf("%d",&k);
	if(k>0)
	{
		for(i=0;s[i];i++)
		{
			if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
			{
				s[i]=s[i]+k;
				
				if(s[i]>90&&s[i]<97)
				{
					s[i]=s[i]-26;
				}
				if(s[i]>122)
				{
					s[i]=s[i]-26;
				}
			}
			if(s[i]>=48&&s[i]<=57)
			{
				s[i]=s[i]+k;
				if(s[i]>57)
				{
					s[i]=s[i]-10;
				}
			}
		}
		puts(s);
	}
	if(k<0)
	{
		for(i=0;s[i];i++)
		{
			if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
			{
				s[i]=s[i]+k;
				if(s[i]<65)
				{
					s[i]=s[i]+26;
				}
				if(s[i]<97&&s[i]>90)
				{
					s[i]=s[i]+26;
				}
			}
			if(s[i]>=48&&s[i]<=57)
			{
				s[i]=s[i]+k;
				if(s[i]<48)
				{
					s[i]=s[i]+10;
				}
			}
		}
		puts(s);
	}
	
}
