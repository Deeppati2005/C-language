#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	while(n>=1)
	{
		printf("%d\t",2*n-1);
		n--;
	}
}
