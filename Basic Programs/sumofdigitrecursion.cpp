#include<stdio.h>
int main()
{
	int sum(int);
    int n, s;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    s = sum(n);
    printf("\nSum = %d", s);
    return 0;
}
int sum(int n)
{
    if(n == 0)
        return 0;
    else 
        return (n % 10) +sum(n / 10);
}

