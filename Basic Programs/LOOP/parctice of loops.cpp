#include<stdio.h>
int main()
{
	int n,a,i,count;
	printf("\n Primes=\t");
	for(n=1;n<=100;n++)
	{
		count=0;
		
			for(i=2;i<=n;i++)
			{
				if(n%i==0)
				count++;
			}
			if(count==1)
				printf("%d\t",n);
	}
}
