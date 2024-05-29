#include<stdio.h>
#include<string.h>
int compare(char *s1,char *s2)
{
	char *i,*j;
	for(i=s1,j=s2;*i!=NULL && *j!=NULL;i++,j++)
	{
		if(*i!=*j)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char a[50],b[50];
	printf("\nEnter the 1st string:");
	gets(a);
	printf("\nEnter the 2nd string:");
	gets(b);
	
}
