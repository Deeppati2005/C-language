#include <stdio.h>
void rev(int n) 
{
    if(n==0) 
	{
        return;
    } 
    else
    {
    	int a=n%10;
    	printf("%d",a);
    	return rev(n/10);
	}
}
int main() 
{
	int n;
	printf("\n Enter thw no:");
	scanf("%d",&n);
	rev(n);
}
