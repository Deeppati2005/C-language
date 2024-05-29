#include<stdio.h>
int fact(int n)
{
	static int f=1;
	if(n==1)
	{
		return f;
	}
	else
	{
		f=f*n;
		n--;
		return fact(n);
	}
}
int main()
{
	int n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("Factorial=%d",fact(n));
}
