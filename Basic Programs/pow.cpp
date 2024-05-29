#include<stdio.h>
int main()
{
	int pow(int);
	int n,a,rem,rev=0,b,c;
	printf("\n Enter the no:");
	scanf("%d",&n);
	a=n%10;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	b=rev;
	c=b%10;
	return pow(b,a);
}

