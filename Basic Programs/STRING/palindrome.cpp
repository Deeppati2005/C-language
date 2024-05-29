#include<stdio.h>
int main()
{
	char s[20];
	int i,j,flag=0;
	printf("\nEnter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	for(j=0,i=i-1;j<i;j++,i--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\n Palindrome");
	else
	printf("\n Not");
}
