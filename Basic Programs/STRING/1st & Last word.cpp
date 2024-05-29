#include<stdio.h>
int main()
{
	char s[20];
	int i,count=0;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(count==0)
		{
			printf("%c",s[i]);
		}
		
		if(s[i]==' ')
		count=i;
	}
	for(i=count+1;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
	}
	
}
