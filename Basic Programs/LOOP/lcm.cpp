#include<stdio.h>
int main()
{
	int a,b,m,i,hcf,lcm;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	m=a*b;
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		hcf=i;
	}
	lcm=m/hcf;
	printf("LCM=%d",lcm);
}
