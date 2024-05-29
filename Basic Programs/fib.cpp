#include<stdio.h>
int main()
{
	int fib(int);
	int n,f;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	f=fib(n);
	printf("%4d",f);
}
int fib(int n)
{
	if(n==0 || n==1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}

