#include<stdio.h>
int main()
{
	int a[3];
	printf("\nEnter the numbers:");
	scanf("%d%d",&a[0],&a[1]);
	a[2]=a[0]+a[1];
	printf("Sum=%d",a[2]);
	
}
