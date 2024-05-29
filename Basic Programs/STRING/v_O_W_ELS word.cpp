#include<stdio.h>
#include<string.h>
#include<ctype.h>
int vowel(char c)
{
	c=tolower(c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	return 1;
	else
	return 0;
}
int main()
{
	char s[100],tmp[20];
	int i,j=0;
	printf("\n Enter a string:");
	gets(s);
	strcat(s," ");
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]!=32)
		tmp[j++]=s[i];
		else{
			tmp[j]='\0';
			if(vowel(tmp[0]))
			puts(tmp);
			j=0;
		}
	}
}
