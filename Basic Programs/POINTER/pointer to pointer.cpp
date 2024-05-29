#include<stdio.h>
int main()
{
	int a=10;
	int *p1,**p2;
	p1=&a;
	p2=&p1;
	printf("%d\n%d",*p1,**p2);
}
