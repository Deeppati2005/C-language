#include<stdio.h>
int main()
{
	int  n,i,a,r,c,count;
	for(n=100;n<=999;n++)
	{
			count=0;
			r=0;
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
	{
		printf("%d\t",n);
	}
}
}
