#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100],tmp[100];
	int i,j;
	printf("\nEnter the string:");
	gets(s);
	strcat(s," ");
	printf("%c",s[0]);
	for(i=0;s[i];i++)
	{
		if(s[i]!=32)
		{
			tmp[j++]=s[i];
		}
		else{
			tmp[j]='\0';
			printf("%c\n%c\n",tmp[0],tmp[j-1]);
			j=0;
		}
		
	}
	
	
		
	
}
