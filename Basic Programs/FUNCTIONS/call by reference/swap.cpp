#include<stdio.h>
int main()
{
	void swap(int &,int &);
	int a,b;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swap a=%d,b=%d",a,b);
	swap(a,b);
	printf("\nAfter swap a=%d,b=%d",a,b);
}
void swap(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
