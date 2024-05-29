#include<stdio.h>
int main()
{
	void fibonacci(int);
	int n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	fibonacci(n);
}
 void fibonacci(int x)
 {
 	int i,c,a=0,b=1;
 	printf("%d,%d",a,b);
 	for(i=0;i<x;i++)
 	{
 		c=a+b;
 		a=b;
 		b=c;
 		printf(",%d",c);
	}
	 
 }
