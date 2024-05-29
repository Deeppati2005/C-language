#include <stdio.h>
#define size 5
char stk[size];
int top = -1;
char push(char c)
{
	stk[++top] = c;
}
char pop()
{
	return stk[top--];
}
int main()
{
	char s[size];
	int i;
	printf("\n Enter the string:");
	gets(s);
	for (i = 0; s[i]; i++)
	{
		push(s[i]);
	}
	printf("\n Reverse String:");
	while (top != -1)
	{
		printf("%c", pop());
	}
}
