#include<stdio.h>
int main()
{
	int gr(int,int,int);
	int a,b,c,d,e,m1,m2;
	printf("\nEnter the numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	m1=gr(a,b,c);
	m2=gr(d,e,m1);
	printf("Greatest=%d",m2);
}
int gr(int a,int b,int c)
{
	if(a>b&&a>c)
	return a;
	else if(b>a&&b>c)
	return b;
	else
	return c;
}
