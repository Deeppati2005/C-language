#include<stdio.h>
struct shape
{
	float l,b,h;
};

int main()
{
	struct shape c;
	printf("Enter the length,breadth,height:");
	scanf("%f%f%f",&c.l,&c.b,&c.h);
	float v;
	v=c.l*c.b*c.h;
	printf("Volume=%.2f",v);
}
