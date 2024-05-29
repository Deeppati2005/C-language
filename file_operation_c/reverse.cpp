#include<stdio.h>
#include<string.h>
int main() 
{
    FILE *fp;
    fp=fopen("para.txt","r");
    char word[100];
    int i,len;
    while(fscanf(fp,"%s",word)!=EOF) 
	{
        len=strlen(word);
        for(i=len-1;i>=0;i--) 
		{
            printf("%c",word[i]);
        }
        printf(" ");
    }
    fclose(fp);
}

