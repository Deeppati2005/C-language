#include <stdio.h>
int main() 
{
	int factorial(int n);
    int n, r, ncr;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    printf("\n Enter the value of r: ");
    scanf("%d", &r);
    ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("%d C %d = %d", n, r, ncr);
}
int factorial(int n) 
{
    int fact = 1;
    for(int i = 1; i <= n; i++) 
	{
        fact *= i;
    } 
    return fact;
}

