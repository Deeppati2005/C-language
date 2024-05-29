//Read char by char
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	char ch;
	int sum1=0,sum2=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(isdigit(ch))
		{
			if(ch!=32||ch!='.')
			{
				sum1=sum1*10+(ch-48);
			}
		}
			if(ch==32||ch=='.')
			{
				sum2+=sum1;
				sum1=0;
			}
		
	}
	printf("Sum of nos:%d",sum2);
	fclose(fp);
}
