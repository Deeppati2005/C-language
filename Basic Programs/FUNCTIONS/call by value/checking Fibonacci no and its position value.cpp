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
 	if(x==0)
 	{
 	printf("1st term");
 	return;
 	}
 	else if(x==1)
 	{
 	printf("2nd term and 3rd term");
 	return;
 }
 	for(i=3;;i++)
 	{
 		c=a+b;
 		a=b;
 		b=c;
	if(c==x)
	{
		printf("At the position %d",i);
		break;
	}
	else if(c>x)
	{
		printf("Not present in Fibonacci series");
		break;
	}
}
		
	 
 }
