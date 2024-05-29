#include<stdio.h>
#include<math.h>
int main()
{
	int power(int,int n=2);
	int x,n,V;
	printf("\nEnter the value of x:");
	scanf("%d",&x);
	printf("Value=%d",power(x));
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	printf("\n%d",power(x,n));
}
int power(int x,int n=2)
{
	int V;
	V=pow(x,n);
	return V;
}
