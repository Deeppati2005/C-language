#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s,count=0,r,a;
	printf("\n Enter the number:");
	scanf("%d",&n);
	s=n*n;
	for(r=n;r>0;r=r/10)
	{
		count=count+1;
	}
	a=pow(10,count);
	i=s%a;	
	if(i==n)
	{
		printf("\nAutomorphic number");
	}
	else
	{
		printf("\nNot an Automorphhic number");
	}
}
