#include<stdio.h>
int main()
{
	int prime(int);
	int i,c;
	for(i=100;i<=999;i++)
	{
		c=prime(i);
		if(c==1)
		printf("%d\t",i);
	}
}
int prime(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
		{
			if(x%i==0)
			return 0;
		}
		return 1;
}
