#include<stdio.h>
#include<math.h>
int main()
{
	int n,q,r1=0,r2=0,i=0,p;
	printf("\nEnter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		q=n%10;
		if(q!=0)
		{
			r1=r1*10+q;
			i++;
		}
		n=n/10;
	}
	while(r1>0)
	{
		q=r1%10;
		r2=r2*10+q;
		r1=r1/10;
	}
	p=pow(10,i);
	printf("\nThe number after moving all the zeroes at last is %d",r2*p);
}
