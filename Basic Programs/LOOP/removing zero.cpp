#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,t=0,a,r;
	printf("\n Enter the number:");
	scanf("%d",&n);
	for(a=n;a>0;a=a/10)
	{
		r=a%10;
		if(r!=0)
		{
			t=r*pow(10,i)+t;
			i++;
		}
	}
		printf("New Number=%d",t);
}
