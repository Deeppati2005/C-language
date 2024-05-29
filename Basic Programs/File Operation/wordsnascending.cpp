#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","r");
	char s,ch[30];
	int max=0,c=0,i=0;
	while((s=fgetc(fp))!=EOF)
	{
		c++;
	}
	char tmp[c];
	
	
}
