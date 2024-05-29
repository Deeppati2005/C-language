#include<stdio.h>
int main()
{
	int n,temp,f=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp>1)
	{
		if(temp%2==0)
		{
			temp=temp/2;
		}
		else if(temp%3==0)
		{
			temp=temp/3;
		}
		else if(temp%5==0)
		{
			temp=temp/5;
		}
		else
		{
			f=1;
			break;
		}
	}
	if(f==0)
	printf("Ugly Number");
	else
	printf("Not a Ugly Number");
}
