#include<stdio.h>
int main()
{
	void Roman(int);
	int y;
	printf("\nEnter the year:");
	scanf("%d",&y);
	Roman(y);
}
void Roman(int y)
{
	printf("\nRoman Equivalent Number=");
	while(y>0)
	{
		if(y>=1000)
		{
			printf("m");
			y=y-1000;
		}
		else if(y>=500)
		{
			printf("d");
			y=y-500;
		}
		else if(y>=100)
		{
			printf("c");
			y=y-100;
		}
		else if(y>=50)
		{
			printf("l");
			y=y-50;
		}
		else if(y>=10)
		{
			printf("x");
			y=y-10;
		}
		else if(y>=5)
		{
			printf("v");
			y=y-5;
		}
		else if(y>=1)
		{
			printf("i");
			y=y-1;
		}
	}
}
