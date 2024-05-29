#include<stdio.h>
int main()
{
	int p,q,r;
	int *a,*b,*c;
	a=&p;
	b=&q;
	c=&r;
	printf("\nEnter the nos:");
	scanf("%d%d",a,b);
	*c=*a+*b;
	printf("%d",*c);
}
