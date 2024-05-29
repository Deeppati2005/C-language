#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,b1,b2,s,c=0,n=0,i=0;
	printf("\n Enter two binary numbers:");
	scanf("%d%d",&b1,&b2);
	while(b1!=0||b2!=0)
	{
		x=b1%10;
		y=b2%10;
		s=x+y+c;
		c=s/2;
		s=s%2;
		b1=b1/10;
		b2=b2/10;
		n=s*pow(10,i)+n;
		i++;
	}
	n=c*pow(10,i)+n;
	printf("sum=%d",n);
}
