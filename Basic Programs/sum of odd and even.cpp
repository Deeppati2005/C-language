#include<stdio.h>
int main()
{
	int n,s1=0,s2=0,i,j;
	printf("\nEnter the no:");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		if(i%2==0)
		{
			s1=s1+i;
		}
		if(i%2!=0)
		{
			s2=s2+i;
		}
		n=n/10;
	}
	printf("sum of odd=%d,sum of even=%d",s1,s2);
	
}
