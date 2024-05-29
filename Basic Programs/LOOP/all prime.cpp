#include<stdio.h>
int main()
{
	int n,i,count;
	for(n=100;n<=999;n++)
	{
		count=0;
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			count++;
		}
	
		if(count==1)
			printf("\t%d",n);
	}
}
