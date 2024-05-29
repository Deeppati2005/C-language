#include<stdio.h>
int main()
{
	int a,b,m,i=1,hcf,lcm;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	m=a*b;
	while(i<=a&&i<=b)
	{
		if(a%i==0&&b%i==0)
		hcf=i;
		i++;
	}
	printf("HCF=%d",hcf);
	lcm=m/hcf;
	printf("\nLCM=%d",lcm);
}
