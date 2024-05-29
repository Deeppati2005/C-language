#include<stdio.h>
int main()
{
	int sum(int,int);
	int a,b,c;
	printf("\nEnter the two numbers:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("Sum=%d",c);
}
	int sum(int x,int y)
	{
		int s=x+y;
		return s;
	}
