#include<stdio.h>
int main()
{
	float i,n,sum=0;
	printf("\nEnter the limit:");
	scanf("%f",&n);
	for(i=2;i<=n;i++)
	{
		sum=sum+(1/(i*i));
	}
	printf("\nSum=%.3f",sum+1);
}
