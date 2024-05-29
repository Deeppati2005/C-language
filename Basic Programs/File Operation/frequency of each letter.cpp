//Read char by char//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{ 
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch;
	int a[26]={0},x,i;
	while((ch=fgetc(fp))!=EOF)
	{
		if(isalpha(ch))
		{
			ch=toupper(ch);
			x=ch-65;
			a[x]++;
		}
	}
	printf("Character\tFrequency");
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("\n%c \t\t %d",65+i,a[i]);
		}
		
	}
	fclose(fp);
}
