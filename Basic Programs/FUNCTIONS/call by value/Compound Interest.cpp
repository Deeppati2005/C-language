#include<stdio.h>
#include<math.h>
int main()
{
	float CI(float,float,float);
	float p,r,t,I,A;
	printf("\nEnter Principal,Rate,Time:");
	scanf("%f%f%f",&p,&r,&t);
	I=CI(p,r,t);
	printf("\nCompound Interest=%.2f",I);
}
float CI(float x,float y,float z)
{
	float s=x*pow((1+(y/100.0)),z)-x;
	return s;
}
