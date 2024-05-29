#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],tmp[100],i;
	int count[5]={0};
	char c[]={'A','E','I','O','U'};
	printf("\nEnter the string:");
	gets(s);
	strupr(s);
	puts(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='A')
		count[0]++;
		else if(s[i]=='E')
		count[1]++;
		else if(s[i]=='I')
		count[2]++;
		else if(s[i]=='O')
		count[3]++;
		else if(s[i]=='U')
		count[4]++;
	}
	printf("\nCharacter \t Frequency");
	for(i=0;i<5;i++)
	{
		printf("\n%c \t\t %d",c[i],count[i]);
	}
	
}
