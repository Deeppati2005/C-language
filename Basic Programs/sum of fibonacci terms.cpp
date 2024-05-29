#include<stdio.h>
int main()
{
	int a=0,b=1,c,sum=1,i;
	for(i=2;i<=20;i++)
	{
		c=a+b;
		sum=sum+c;
		a=b;
		b=c;
	}
	printf("Sum of 20 fibonacci terms is=%d",sum);
}
