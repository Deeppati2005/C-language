#include<stdio.h>
int main()
{
	int n1,n2,i,j,count1,count2;
	printf("\n Enter the numbers:\n");
	scanf("%d%d",&n1,&n2);
	for(i=2;i<=n1;i++)
	{
		count1=0;
		count2=0;
		if(n1%i==0)
		count1++;
	}
	for(j=2;j<=n2;j++)
	{
		if(n2%j==0)
		count2++;
	}
		if(count1==1&&count2==1)
		{
			if(n2-n1==2)
			{
				printf("Twin Prime");
			}
			else
			{
				printf("Prime but not Twin Prime");
			}
		}
		else
		{
			printf("Not a Prime number");
		}
}
