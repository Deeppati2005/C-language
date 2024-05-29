#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the no.");
	scanf("%d",&n);
	if(n%10==7)
	{
		printf("Ends with 7");
	}
	else
	{
		printf("Not");
	}
}
