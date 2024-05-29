#include<stdio.h>
 int sum(int a,int b)
 {
 	return (a+b);
 }
 int main()
 {
 	int (*ptr)(int,int)=&sum;
 	int a,b;
 	printf("\nEnter the numbers:");
 	scanf("%d%d",&a,&b);
 	int c=(ptr)(a,b);
 	printf("Result=%d",c);
 }
