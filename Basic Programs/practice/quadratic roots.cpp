#include<stdio.h>
#include<math.h>
int main()
{
	int d,a,b,c;
	float x1,x2;
	printf("Enter the value of the a,b,c of the quadratic equation:");
	scanf("%d%d%d",&a,&b,&c);
	printf("The quadratic equation is %dx^2+%dx+%d=0\n",a,b,c);
	d=(b*b)-4*a*c;
	printf("The value of the discriminant is %d\n",d);
	if(d>0)
	{
		printf("The roots are real\n");
		x1=-((b+sqrt(d))/2*a);
		x2=-((b-sqrt(d))/2*a);
		printf("The roots are %.2f , %.2f",x1,x2);
	}
	if(d==0)
	{
		printf("The roots are equal\n");
		x1=-b/2*a;
		x2=x1;
		printf("The roots are %.2f, %.2f",x1,x2);
	}
	if(d<0)
	{
		printf("The roots are imaginary!!");
	}
}
