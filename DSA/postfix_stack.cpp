#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define size 10
int stk[size];
int top = -1;
void push(int n)
{
	stk[++top] = n;
}
int pop()
{
	return stk[top--];
}
int main()
{
	// 4542^+*22^93/*- => 72
	int a, b, c, i;
	char s[100];
	printf("\n Enter the postfix expression:");
	gets(s);
	for (i = 0; s[i]; i++)
	{
		if (isdigit(s[i]))
		{
			push(s[i] - 48);
		}
		else
		{
			b = pop();
			a = pop();
			switch (s[i])
			{
			case '+':
				c = a + b;
				break;
			case '-':
				c = a - b;
				break;
			case '*':
				c = a * b;
				break;
			case '/':
				c = a / b;
				break;
			case '^':
				c = pow(a, b);
				break;
			case '%':
				c = a % b;
				break;
			}
			push(c);
		}
	}
	printf("\n Result=%d", pop());
}
