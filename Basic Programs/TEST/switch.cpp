#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	char op;
	printf("\nEnter two numbers:");
	scanf("%f%f",&a,&b);
	fflush(stdin);
	printf("\nEnter the operator:");
	scanf("%c",&op);
	switch(op)
	{
		case '+':printf("Sum=%f",a+b);
				break;
		case '-':printf("Substraction=%f",a-b);
				break;
		case '*':printf("Multiplication=%f",a*b);
				break;
		case'/':printf("Division=%f",a/b);
				break;
		case'^':printf("Power=%f",pow(a,b));
				break;
		default:printf("Wrong input");
				break;
	}
}
