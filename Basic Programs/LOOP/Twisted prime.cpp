#include<stdio.h>
int main()
{
	int n,i,count1=0,count2=0,r=0,j,a,k;
	printf("\n Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		{ 
			if(n%i==0)
			count1++;
		}
		if(count1==1)
		{
			for(j=n;j>0;j=j/10)
			{
				a=j%10;
				r=r*10+a;
			}
			for(k=2;k<=r;k++)
			{
				if(r%k==0)
				count2++;
			}
			if(count2==1)
			{
				printf("Twisted prime");
			}
			else
			{
				printf("Prime but not twisted");
			}
		}
		else
		{
			printf("Not a prime number");
		}
	
}
