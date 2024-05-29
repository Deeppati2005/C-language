//Read word by word
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch[30],tmp[30];
	while(fscanf(fp,"%s",ch)!=EOF)
	{
		if(strlen(ch)==5)
		printf("%s\t",ch);
	}
	
	fclose(fp);
}
