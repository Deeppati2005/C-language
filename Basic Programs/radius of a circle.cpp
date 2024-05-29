#include<stdio.h>
#include<math.h>
int main()
{
	double s,r;
	printf("\nEnter the area: ");
	scanf("%lf",&s);
	r=sqrt(s/3.14);
	printf("Radius=%.3lf",r);
}
