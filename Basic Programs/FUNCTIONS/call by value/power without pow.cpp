#include<stdio.h>
int main()
{
	int pow(int,int);
	int x,n,V;
	printf("Enter the value of x and n:\n");
	scanf("%d%d",&x,&n);
	V=pow(x,n);
	printf("Value=%d",V);
}
int pow(int x,int n)
{
	 int power=1,i;  
    for (i=1;i<=n;i++) 
	{  
        power=power*x ;  
    }  
    return power ;  
}
	
	

