#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("word.txt","r");
	char c;
	int i;
	fseek(fp,0,2);
	int p=ftell(fp);
	for(i=1;i<=p;i++)
	{
		fseek(fp,-i,2);
		c=fgetc(fp); 
		printf("%c\t",c);
	}
	fclose(fp);
}
