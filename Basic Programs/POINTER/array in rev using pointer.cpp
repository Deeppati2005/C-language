#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50},i;
	int *p=&a[4];
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p--);
	}
	
}
