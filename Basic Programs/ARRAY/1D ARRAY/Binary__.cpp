#include<stdio.h>
int main()
{
	int i,a[10],n;
	printf("\nEnter decimal no:");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	n=i;
	printf("The Binary form is:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
