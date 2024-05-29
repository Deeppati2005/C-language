#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("notes.txt","r");
	char word[100];
	int i,j,flag,len;
	while(fscanf(fp,"%s",word)!=EOF)
	{
		len=strlen(word);
		flag=1;
		i=0;
		j=len-1;	
		while(i<j)
		{
			if(word[i]!=word[j])
			{
				flag=0;
				break;
			}
			i++;
			j--;
		}	
		if(flag==1)
		{
			printf("\n palindrome word:%s", word);
		}
	}
	fclose(fp);
}

