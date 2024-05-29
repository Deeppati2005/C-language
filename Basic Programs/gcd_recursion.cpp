#include <stdio.h>
int main() 
{
	int gcd(int,int);
	int lcm(int,int);
    int a, b, c,d;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d", &a, &b);
    c = gcd(a, b);
    d=lcm(a,b);
    printf("\nGCD = %d & lcm=%d", c,d);
    return 0;
}
int gcd(int a, int b) 
{
    if(b == 0) 
	{
        return a;
    } 
	else 
	{
        return gcd(b,a % b);
    }
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}

