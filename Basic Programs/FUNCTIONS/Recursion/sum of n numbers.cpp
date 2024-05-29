#include<stdio.h>
int main()
{
	int sum(int);
	int s,n;
	printf("\nEnter the no:");
	scanf("%d",&n);
	s=sum(n);
	printf("Sum=%d",s);
}
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
}
