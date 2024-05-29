#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=1&&n<=9)
	{
		printf("%c",n);
	}
	else
	{
		printf("Greater than 9");
	}
}
