#include<stdio.h>
#define max(a,b,c) a>b?a>c?a:c:b>c?b:c
int main()
{
	int a,b,c,d,e,f,g;
	printf("\nEnter the numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=max(a,b,c);
	g=max(f,d,e);
	printf("max=%d",g);
	
}
