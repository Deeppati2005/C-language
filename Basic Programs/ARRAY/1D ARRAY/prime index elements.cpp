#include<stdio.h>
#include<conio.h>
int prime_index(int i)
{
	int j,flag=0;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
}
int main()
{
	int a[]={1,2,31,15,153,30,371,11,407},n=9,i,j,q,sum=0;
	printf("The array is:");
	for(i=0;i<n;i++)
	{
		printf("%4d\t",a[i]);
	}
	printf("\n\nPrime Index elements are: ");
	for(i=2;i<n;i++)
	{
		if(prime_index(i))
		{
			printf("%d\t",a[i]);
		}
	}
	for(i=0;i<n;i++)
		{
			if(prime_index(i)==0)
			for(j=a[i];j>0;j=j/10)
			{
				q=j%10;
				sum+=q*q*q;
			}
			if(sum==a[i])
			{
				printf("\n%d element of index %d is Armstrong\n",a[i],i);
			}
		}
		
}
