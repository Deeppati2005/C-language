#include<stdio.h>
int main()
{
	int a=0,b=1,c,sum1=1,sum2=0,i;
	for(i=3;i<=20;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(i%2==0)
		
		{
			sum1+=c;
		}
		else
		{
			sum2+=c;
		}
	}
	printf("Sum1=%d\nSum2=%d",sum1,sum2);
}
