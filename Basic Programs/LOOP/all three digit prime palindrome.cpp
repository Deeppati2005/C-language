#include<stdio.h>
int main()
{
	int n,i,c,a,r,count;
	printf("\nThe three digit prime palindromes are:");
	for(n=100;n<=999;n++)
	{
		r=0;
		count=0;
		for(i=n;i>0;i=i/10)
		{
			a=i%10;
			r=r*10+a;
		}
		for(c=2;c<=n;c++)
		{
			if(n%c==0)
			count++;
		}
		if(r==n&&count==1)
		printf("\n%d",n);
}
}
