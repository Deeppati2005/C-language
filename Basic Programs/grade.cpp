#include<stdio.h>
int main()
{
	int m;
	char g;
	printf("\nEnter the marks:");
	scanf("%d",&m);
	g=(m>=80)?'A':(m>=60)?'B':(m>=45)?'C':'F';
	printf("Grade=%c",g);
}
