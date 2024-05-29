#include<stdio.h>
int main()
{
	char s[]="Welcome to C";
	int i,j;
	printf("\nString After reversing:\n");
	for(i=0;s[i];i++);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",s[j]);
	}
}
