#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char s[],int n)
{
	int i,j;
	char tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch[30],tmp[30];
	int i,j;
	char *s[20];
	while(fscanf(fp,"%s",ch)!=EOF)
	{
		s[i]=(char *)malloc(strlen(ch)+1);
		strcpy(s[i],ch);
		i++;
	}
	
	for(j=0;j<i;j++)
	{
		sort(s[j],strlen(s[j]));
		puts(s[j]);
	}
	fclose(fp);
}
