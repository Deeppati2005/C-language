#include<stdio.h>
#define swap(a,b) b=(a+b)-(a=b)
int main()
{
	int a,b,c;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("after swap a=%d,b=%d",a,b);
}
