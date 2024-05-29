#include<stdio.h>
int main()
{
	int gcd(int,int);
	int a,b,g;
	printf("\nEnter the number:");
	scanf("%d%d",&a,&b);
	g=gcd(a,b);
	printf("GCD=%d",g);
}
int gcd(int x,int y)
{
	if(y==0)
	return x;
	else if(x<y)
	return gcd(y,x);
	else 
	return gcd(y,x%y);
	
}
