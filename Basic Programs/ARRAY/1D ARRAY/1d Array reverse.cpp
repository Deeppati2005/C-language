#include<stdio.h>

void rev(int a[])
{
	int i;
	for(i=4;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int a[5];
	int i;
	printf("\n Elements are :");
	for(i=0;i<5;i++)
	{
		scanf("%4d",&a[i]);
	}
	printf("reversed array:");
	rev(a);
}

