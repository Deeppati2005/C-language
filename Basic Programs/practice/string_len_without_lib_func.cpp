#include<stdio.h>
void input(char s[])
{
	printf("\nEnter the string:");
	gets(s);
}
int length(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
int main()
{
	char s[100];
	input(s);
	printf("Length of the string=%d",length(s));
}
