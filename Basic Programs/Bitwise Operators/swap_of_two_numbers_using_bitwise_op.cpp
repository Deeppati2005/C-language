#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter the value of a and b:");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap a=%d b=%d",a,b);
}
