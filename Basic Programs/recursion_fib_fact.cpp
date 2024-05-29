#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,fact(n));
	printf("\nThe %dth Fib term is %d",n,fib(n));
}
