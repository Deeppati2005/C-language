#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define l 26
int main()
{
	FILE *fp;
	fp=fopen("notes.txt","r");
	int frq[l]={0};
	char word;
	int i;
	while((word=fgetc(fp))!=EOF)
	{
		if(isalpha(word))
		{
			word=tolower(word);
			frq[word-'a']++;
		}
	}
	for(i=0;i<l;i++)
	{
		if(frq[i]>0)
		{
			printf("%c : %d\n",i+'a',frq[i]);
		}
	}
	fclose(fp);
}
