#include<stdio.h>
int main()
{
	int d,m,y;
	printf("\n Enter the date-month-year:")	;
	scanf("%d%d%d",&d,&m,&y);
	if(d>=1 && d<=31 && m>=1 && m<=12 && y>=1000 && y<=9999)
	printf("\n Valid date");
	else
	printf("\n not valid ");
}

