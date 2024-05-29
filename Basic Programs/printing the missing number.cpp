#include<stdio.h>
int main()
{
	int a,n,i,t,flag;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		t=n;
		flag=0;
		while(t>0)
		{
			a=t%10;
			if(a==i)
			{
				flag=1;
				break;
			}
			t=t/10;
		}
		if(flag==0)
		{
			printf("%d ",i);
		}
	}
}
