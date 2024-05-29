#include<stdio.h>
int main()
{
	int prime(int,int i=2);
	int n,a;
	printf("\n Enter the number:");
	scanf("%d",&n);
	if(prime(n))
	printf("\n Prime No");
	else
	printf("\n Not a Prime No");
	return 0;
}
int prime(int n,int i=2)
{
	if(i>n/2)
	return 1;
	else if(n%i==0)
	return 0;
	else
	return prime(n,i+1);
}
