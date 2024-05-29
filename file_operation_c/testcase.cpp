#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("notes.txt","r");
	char word[100],rev;
	int i,j,len;
	while(word=fgetc(fp)!=EOF)
	{
		for(i=len-1;i>0;i--)
		{
			printf("%c",word[i]);
		}		
	}
	fclose(fp);
}

