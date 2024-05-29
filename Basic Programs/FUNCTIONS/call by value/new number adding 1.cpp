#include<stdio.h>
int main()
{
	int no(int);
	int n,N;
	printf("\nEnter the number:");
	scanf("%d",&n);
	N=no(n);
	printf("\nOriginal No=%d",n);
	printf("\nNew Number=%d",N);
}
int no(int n)
{
	int t,p=0;
	for(t=n;t>0;t=t/10)
	{
		p=p*10+1;
	}
	return n+p;
}
