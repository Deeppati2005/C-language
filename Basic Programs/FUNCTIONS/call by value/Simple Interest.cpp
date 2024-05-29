#include<stdio.h>
int main()
{
	float SI(float,float,float);
	float p,r,t,I;
	printf("\nEnter Principal,Rate,Time:");
	scanf("%f%f%f",&p,&r,&t);
	I=SI(p,r,t);
	printf("\nSimple Interest=%.2f",I);
}
float SI(float x,float y,float z)
{
	float s=(x*y*z)/100;
	return s;
}
