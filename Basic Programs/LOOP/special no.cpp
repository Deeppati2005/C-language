#include<stdio.h>
int main()
{
	int a,n,f,sum=0,t;
	printf("\nEnter the number:");
	scanf("%d",&n);
	t=n;
	while(n)
	{
		a=n%10;
		f=1;
		while(a>0)
		{
			f=f*a;
			a--;
		}
		sum=sum+f;
		n=n/10;
	}
	if(sum==t)
	{
		printf("\n Special No");
	}
	else{
		printf("\n Not a special No");
	}
}
