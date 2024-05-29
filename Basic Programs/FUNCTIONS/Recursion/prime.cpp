#include<stdio.h>
int main()
{
	int prime(int,int);
	int n,p;
	printf("\nEnter the number:");
	scanf("%d",&n);
	p=prime(n,n/2);
	if(p==1)
	{
		printf("Prime No");
	}
	else
	{
		printf("Not Prime");
	}
	
	
}
int prime(int x,int i)
{
	if(i==1)
	return 1;
	else 
	{
		if(x%i==0)
		return 0;
		else 
		prime(x,i-1);
	}
}
