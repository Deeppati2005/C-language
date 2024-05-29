#include<stdio.h>
#include<math.h>
int main()
{
	float n,x,y;
	printf("\nEnter the value of x and n");
	scanf("%f%f",&x,&n);
	y=pow(x,(1/n));
	printf("nth root =%.2f",y);
}
