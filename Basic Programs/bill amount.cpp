#include<stdio.h>
int main()
{
	char name[20];
	int units;
	float b=0;
	printf("\n Enter Name:");
	gets(name);
	printf("\nEnter the Unit consumed:");
	scanf("%d",&units);
	printf("\n Name          : %s",name);
	printf("\n Units Consumed: %d",units);
	printf("\n Break up bill :");
	if(units<=200)
	{
		b=units*3.80;
		printf("\n For first %d units : %.2f",units,b);
	}
	else if(units<=300)
	{
		b=(200*3.80)+(units-200)*4.40;
		printf("\n For first 200 units : %.2f",200*3.80);
		printf("\n Next %d units : %.2f",units-200,(units-200)*4.40);
	}
	else if(units<=400)
	{
		b=(200*3.80)+100*4.40+(units-300)*5.10;
		printf("\n For first 200 units : %.2f",200*3.80);
		printf("\n Next 100 units : %.2f",100*4.40);
		printf("\n Next %d units : %.2f",units-300,(units-300)*5.10);
	}
	else{
		b=(200*3.80)+100*4.40+100*5.10+(units-400)*5.80;
		printf("\n For first 200 units : %.2f",200*3.80);
		printf("\n Next 100 units : %.2f",100*4.40);
		printf("\n Next 100 units : %.2f",100*5.10);
		printf("\n Next %d units : %.2f",units-400,(units-400)*5.80);
	}
	printf("\n-----------------------------");
	printf("\n Total       :%.2f",b);
}
