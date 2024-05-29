#include<stdio.h>
int main()
{
	int n,i,sum1=0,sum2=0;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		sum1=sum1+i;
	}
		for(i=1;i<=n;i=i+2)
		{
		sum2=sum2+i;
		}
		printf("\nsum1=%d",sum1);
		printf("\n sum2=%d",sum2);
}
