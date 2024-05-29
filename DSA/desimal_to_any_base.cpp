#include <stdio.h>
#define size 10
int stk[size];
int top = -1;
int push(int n)
{
	stk[++top] = n;
}
int pop()
{
	return stk[top--];
}
int main()
{
	int a, b;
	printf("\n Enter the no and the base:");
	scanf("%d%d", &a, &b);
	while (a)
	{
		push(a % b);
		a = a / b;
	}
	while (top != -1)
	{
		printf("%d", pop());
	}
}
