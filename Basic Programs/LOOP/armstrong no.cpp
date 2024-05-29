#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s=0,count=0,a;
	printf("\nEnter the Number:");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		count++;
	}
	i=n;
	while(n>0)
	{
		a=n%10;
		s=s+pow(a,count);
		n=n/10;
	}
	if(s==i)
	{
		printf("ARMSTRONG NO");
	}
	else
	{
		printf("NOT ARMSTRONG");
	}
}
