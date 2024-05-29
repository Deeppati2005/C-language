#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		count=count+1;
	}
	printf("\nNumber of digits=%d",count);
}
