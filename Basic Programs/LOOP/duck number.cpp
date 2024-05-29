#include<stdio.h>
int main()
{
	int n,c,i=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(c=n;c>0;c=c/10)
	{
		if(c%10==0)
		i++;
	}
	if(i==1)
	{
		printf("Duck number");
	}
	else 
	{
		printf("Not a Duck number");
	}
}
