#include<stdio.h>
int main()
{
	void swap(int,int);
	int n1,n2;
	printf("\nEnter the numbers:");
	scanf("%d%d",&n1,&n2);
	swap(n1,n2);
}
void swap(int n1,int n2)
{
	 n1=n1+n2;
	 n2=n1-n2;
	 n1=n1-n2;
	 printf("n1=%d n2=%d",n1,n2);
}
