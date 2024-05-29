//Read Line by Line
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch[100];
	while(fgets(ch,100,fp))
	{
		puts(ch);
	}
	fclose(fp);
}
