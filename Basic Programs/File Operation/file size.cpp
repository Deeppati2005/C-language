#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("para.txt","r");
	fseek(fp,0,2);
	int p=ftell(fp);
	printf("\nFile Size=%d",p);
	fclose(fp);
}
