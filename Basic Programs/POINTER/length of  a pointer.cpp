#include<stdio.h>
int len(char *s)
{
	char *p=s;
	while(*++p);
	return(p-s);
}
int main()
{
	char *s="Welcome";
	int i;
	i=len(s);
	printf("length of string=%d",i);
	
}
