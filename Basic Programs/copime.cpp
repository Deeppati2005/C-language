#include<stdio.h>
int main()
{
	int gcd(int,int);
	int a,b,c;
	printf("\n Enter 2 nos:");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("\n GCD=%d",c);
	return 0;
}
int gcd(int a,int b)
{
	if(a%b==0)
	return 0;
	else
	return gcd(b,a%b);
}
