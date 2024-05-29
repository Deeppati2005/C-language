#include<stdio.h>
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
int main()
{
	int a,b;
	printf("\nEnter the nos:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\na=%d,b=%d",a,b);
	
}
