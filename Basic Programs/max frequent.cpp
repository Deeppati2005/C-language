#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],x;
	int i,j,c,max=0;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i];i++)
	{
		c=0;
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				c++;
			}
		}
		if(max<c)
		{
			max=c;
			x=s[i];
		}
	}
	printf("max frequent=%c",x);
}
