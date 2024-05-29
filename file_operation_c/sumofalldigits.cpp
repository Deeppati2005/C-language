#include<stdio.h>
#include<ctype.h>
int main() 
{
	FILE *fp;
	fp=fopen("notes.txt","r");
    int sum=0;
    char c;
    while((c=fgetc(fp))!=EOF) 
	{
        if(isdigit(c))
		{
            sum=sum+(c-48);
        }
    }
    printf("\n The sum of all digits in the file is=%d",sum);
    fclose(fp);
}

