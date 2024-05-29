#include<stdio.h>
int fib(int n)
{
	static int a=0,b=1,c;
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
		c=a+b;
		a=b;
		b=c;
		n--;
		return c;
		return fib(n);
	}
}
int main()
{
	int i,n;
	printf("\nEnter the limit of the Fibseries:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}	
}

