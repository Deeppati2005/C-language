#include<stdio.h>
int main()
{
	int fib(int);
	int n,P;
	printf("\nEnter the term no.:");
	scanf("%d",&n);
	P=fib(n);
	printf("%d term is %d",n,P);
}
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2||n==3)
	{
		return 1;
	}
	
	else
	{
		return fib(n-2)+fib(n-1);
		
	}
	
}
