#include<stdio.h>
#include<math.h>
int main()
{
	double n,d;
	int num,decimal,i,j,r1=0,r2=0,a,b,k,l,x,count=0;
	printf("\nEnter the number:");
	scanf("%lf",&n);
	num=int(n);
	d=n-num;
	while(n!=int(n))
	{ 
		count++;
		n=n*10;
	}
	b=pow(10,count);
	d=d*b;
	k=int(d);
	for(i=num;i!=0;i=i/10)
	{
		a=i%10;
		r1=r1*10+a;
	}
	for(l=k;l>0;l=l/10)
	{
		x=l%10;
		r2=r2*10+x;
		printf("%d",r2);
	}
	printf("\nReverse Number=%d.%d",r1,r2);
}
