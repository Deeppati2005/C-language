#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}

