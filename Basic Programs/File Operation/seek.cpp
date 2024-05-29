#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("word.txt","r");
	char c;
	int i=0;
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}
	fclose(fp);
}
