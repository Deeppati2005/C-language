#include<stdio.h>
int main()
{
	int curr,prev,pprev;
	int n,i,count=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&curr);
		if(curr<0)
		{
			continue;
		}
		if(count==0)
		{
			pprev=curr;
			count++;
		}
		if(count==1)
		{
			prev=curr;
			count++;
		}
		else
		{
			if(prev*prev+pprev*pprev==curr*curr)
			{
				printf("Pythagorean triplet found i.e. %d,%d,%d",pprev,prev,curr);
			}
			pprev=prev;
			prev=curr;
		}
		
	}
}
