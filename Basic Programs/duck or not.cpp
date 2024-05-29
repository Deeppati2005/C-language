#include<stdio.h>
int main()
{
	int n,i,j=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		
		if(n%10==0)
		{
			j=1;
			break;
			
		}
		n=n/10;
		
	}
	if(j==1)
	{
		printf("\nDuck");
	}
	else
	{
		printf("Not duck");
	}
}
