#include<stdio.h>
int main()
{
	int factorial(int);
	int n,f;
	printf("\nEnter the number:");
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial=%d",f);
}
int factorial(int x)
{
	int i,a=1;
	for(i=1;i<=x;i++)
	{
		a=a*i;
	}
	return a;
}
