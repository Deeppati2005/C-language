//calc- + ,*
#include<stdio.h>
int calc(int &a,int &b)
{
	int p=a*b;
	int s=a+b;
	a=s;
	b=p;
}
int main()
{
	int a=10,b=20;
	calc(a,b);
	printf("\n Sum=%d,product=%d",a,b);
}

