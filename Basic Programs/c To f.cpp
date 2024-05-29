#include<stdio.h>
int main()
{
	float f,c;
	char op;
	printf("\nEnter the option:");
	scanf("%c",&op);
	switch(op)
	{
		case'f':printf("\nEnter the value of temp in F:");
				scanf("%f",&f);
				c=(5*f-160)/9;
				printf("Celsius=%f",c);
				break;
			
		case'c':printf("\nEnter the value of temp in C:");
				scanf("%f",&c);
				f=(9*c+32)/5;
				printf("Fahrenheit=%f",f);
				break;
				
		default:printf("Wrong Input!!");
	}
}
