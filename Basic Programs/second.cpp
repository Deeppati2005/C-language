#include<stdio.h>
int main()
{
	int a,b,c,x,y;
	printf("\nEnter the number:");
	scanf("%d%d%d",&a,&b,&c);
	x=(a>b)?(a>c)?a:c:(b>c)?b:c;
	y=(a<b)?(a<c)?a:c:(b<c)?b:c;
	
	printf("second largest:%d",(a+b+c)-(x+y));
}
