#include<stdio.h>
struct date
{
	int d,m,y;
};
int main()
{
	struct date t;
	int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("\nEnter the date(dd-mm-yyyy):");
	scanf("%d%d%d",&t.d,&t.m,&t.y);
	m[2]=(t.y%4==0)?29:28;
	if(t.m>=1 && t.m<=12)
	{
		if(t.d>=1 && t.d<=12)
		printf("Valid Date:");
		else 
		printf("Invalid Days");
	}
	else
	{
		printf("\nInvalid Month");
	}
}
