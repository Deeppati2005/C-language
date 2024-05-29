//Read char by char
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch;
	int sum=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch>=48&&ch<=57)
		{
			sum=sum+(ch-48);
		}
	}
	printf("Sum of digits:%d",sum);
	fclose(fp);
}
