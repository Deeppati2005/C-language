#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,ip,rp;
    printf("\n Enter the coefficients a, b, c of the quadratic equation:");
    scanf("%f%f%f",&a,&b,&c);
    d=(b * b) -(4 * a * c);
    if(d>0) 
	{
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\n The roots of the quadratic equation are: %f and %f",r1,r2);
    } 
	else if(d==0) 
	{
        r1=r2=-b/(2*a);
        printf("The roots of the quadratic equation are: %f and %f",r1,r2);
    } 
	else 
	{
        rp=-b / (2 * a);
        ip= sqrt(-d) / (2 * a);
        printf("The roots of the quadratic equation are: %f + %fi and %f - %fi",rp,ip,rp,ip);
    }
}
